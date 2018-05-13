/*Header-MicMac-eLiSe-25/06/2007

    MicMac : Multi Image Correspondances par Methodes Automatiques de Correlation
    eLiSe  : ELements of an Image Software Environnement

    www.micmac.ign.fr

   
    Copyright : Institut Geographique National
    Author : Marc Pierrot Deseilligny
    Contributors : Gregoire Maillet, Didier Boldo.

[1] M. Pierrot-Deseilligny, N. Paparoditis.
    "A multiresolution and optimization-based image matching approach:
    An application to surface reconstruction from SPOT5-HRS stereo imagery."
    In IAPRS vol XXXVI-1/W41 in ISPRS Workshop On Topographic Mapping From Space
    (With Special Emphasis on Small Satellites), Ankara, Turquie, 02-2006.

[2] M. Pierrot-Deseilligny, "MicMac, un lociel de mise en correspondance
    d'images, adapte au contexte geograhique" to appears in 
    Bulletin d'information de l'Institut Geographique National, 2007.

Francais :

   MicMac est un logiciel de mise en correspondance d'image adapte 
   au contexte de recherche en information geographique. Il s'appuie sur
   la bibliotheque de manipulation d'image eLiSe. Il est distibue sous la
   licences Cecill-B.  Voir en bas de fichier et  http://www.cecill.info.


English :

    MicMac is an open source software specialized in image matching
    for research in geographic information. MicMac is built on the
    eLiSe image library. MicMac is governed by the  "Cecill-B licence".
    See below and http://www.cecill.info.

Header-MicMac-eLiSe-25/06/2007*/


#ifndef _NewRechPH_H_
#define _NewRechPH_H_

#include  <forward_list>

class cAppli_NewRechPH;
class cOneScaleImRechPH;

#include "cParamNewRechPH.h"
#include "ExternNewRechPH.h"
#include "LoccPtOfCorrel.h"

void TestTouch();
void TestLearnOPC(cSetRefPCarac & aSRP);

double TimeAndReset(ElTimer &);

#define StdGetFromNRPH(aStr,aObj)\
StdGetObjFromFile<c##aObj>\
    (\
        aStr,\
        MMDir() + "src/uti_image/NewRechPH/ParamNewRechPH.xml",\
        #aObj ,\
        #aObj \
     )


/*
typedef float   tElNewRechPH ;
typedef double  tElBufNRPH ;
typedef Im2D<tElNewRechPH,tElBufNRPH>  tImNRPH;
typedef TIm2D<tElNewRechPH,tElBufNRPH> tTImNRPH;
*/

constexpr int DynU1 = 32;
void StdInitFitsPm(cFitsParam & aFP);


typedef std::forward_list<tPtrPtRemark> tLPtBuf;



/************************************************************************/

// represente une echelle de points remarquable
// contient une image floutee et les points extrait

class cOneScaleImRechPH
{
      public :
          // deux constructeurs statiques 

             // 1- constucteur "top-level" a partir du fichier
          static cOneScaleImRechPH* FromFile 
                 (
                    cAppli_NewRechPH &,
                    const double & aS0, // sigma0
                    const std::string &,  // Nom du fichier
                    const Pt2di & aP0,const Pt2di & aP1  // Box Calcule
                 );
          static cOneScaleImRechPH* FromScale
                 (
                      cAppli_NewRechPH &,    // Application
                      cOneScaleImRechPH &,   // niveau du dessus
                      const double & aSigma,  // a sigma abs
                      int       aScaldec, // Scale decimation
                      bool      JumpDecim
                 );
          tImNRPH  Im() {return mIm;}  // simple accesseur a l'image
          tTImNRPH TIm() {return mTIm;}  // simple accesseur a l'image


          void CalcPtsCarac(bool Basic);
          void Show(Video_Win* aW);
          void CreateLink(cOneScaleImRechPH & aLR);
          void Export(cSetPCarac & aSPC,cPlyCloud *  aPlyC);

          const int &  NbExLR() const ;
          const int &  NbExHR() const ;
          const double &  ScaleAbs() const ;
          const double &  ScalePix() const ;
          const int &  PowDecim() const ;
          int  Niv() const {return mNiv;}
          double GetVal(const Pt2di & aP,bool & Ok) const;

// Sift 
          void SiftMakeDif(cOneScaleImRechPH* );
          void SiftMaxLoc(cOneScaleImRechPH* aLR,cOneScaleImRechPH* aHR,cSetPCarac&);
          // bool OkSiftContrast(cOnePCarac & aP) ;
          // double ComputeContrast() ;


          bool ComputeDirAC(cOnePCarac &);
          bool AffinePosition(cOnePCarac &);
          int& NbPOfLab(int aK) {return mNbPByLab.at(aK);}

          double QualityScaleCorrel(const Pt2di &,int aSign,bool ImInit);
          bool SameDecim(const cOneScaleImRechPH &) const;  // Meme niveau de decimation
          bool SifDifMade() const;  // Meme niveau de decimation

         // return le premier a meme decim ou sinon 0
         cOneScaleImRechPH * GetSameDecimSiftMade(cOneScaleImRechPH*,cOneScaleImRechPH*);

      private :
          void InitImMod();
          Pt3dr PtPly(const cPtRemark & aP,int aNiv);

          void CreateLink(cOneScaleImRechPH & aLR,const eTypePtRemark & aType);
          void InitBuf(const eTypePtRemark & aType, bool Init);


          cOneScaleImRechPH(cAppli_NewRechPH &,const Pt2di & aSz,const double & aScale,const int & aNiv,int aPowDecim);
 
          // Selectionne les maxima locaux a cette echelle
          bool  SelectVois(const Pt2di & aP,const std::vector<Pt2di> & aVVois,int aValCmp);
          // Selectionne les maxima locaux a avec une echelle differente
          bool  ScaleSelectVois(cOneScaleImRechPH*, const Pt2di&, const std::vector<Pt2d<int> >&, int);
          std::list<cPtRemark *>  mLIPM;
   
          cAppli_NewRechPH & mAppli;
          Pt2di     mSz;
          tImNRPH   mIm;   // Image brute
          tTImNRPH  mTIm;


          tImNRPH   mImMod;   // Dif en Sift, corner en harris etc ...
          tTImNRPH  mTImMod;
          tInterpolNRPH * mInterp;

          double    mScaleAbs;    // Scale Absolu
          double    mScalePix; // Tient compte de la decimation
          int       mPowDecim;
          int       mNiv;
          int       mNbExLR; 
          int       mNbExHR;
          std::vector<int>   mNbPByLab;
          double             mQualScaleCorrel;
          std::vector<Pt2di>   mVoisGauss;
          std::vector<double>  mGaussVal;
          bool                 mSifDifMade;
};


class cAppli_NewRechPH
{
    public :
        Pt2di SzInvRadUse();
        Pt2di SzInvRadCalc();

        cAppli_NewRechPH(int argc,char ** argv,bool ModeTest);

        double   DistMinMax(bool Basic) const ;
        const bool   &      DoMin() const       {return mDoMin;}
        const bool   &      DoMax() const       {return mDoMax;}
        cPlyCloud * PlyC()  const {return mPlyC;}
        const double & DZPlyLay() const {return  mDZPlyLay;}


        // double    ThreshCstrIm0() {return mThreshCstrIm0;}
        bool                                 InsideBuf2(const Pt2di &);
        tPtrPtRemark  NearestPoint2(const Pt2di &,const double & aDist);
        void AddBuf2(const tPtrPtRemark &);
        void ClearBuff2(const tPtrPtRemark &);

        bool Inside(const Pt2di & aP) const;
        const Pt2di & SzIm() const ;
        bool       TestDirac() const {return mTestDirac;}
        double ScaleAbsOfNiv(const int &) const;
        void AddBrin(cBrinPtRemark *);

        int&  NbSpace()          { return  mNbSpace;}
        int&  NbScaleSpace()     { return  mNbScaleSpace;}
        int&  NbScaleSpaceCstr() { return  mNbScaleSpaceCstr;}
        double   SeuilAC() const { return  mSeuilAC;}
        double   SeuilCR() const { return  mSeuilCR;}
        bool SaveFileLapl() const{return  mSaveFileLapl;}

        bool  OkNivStab(int aNiv);
        bool  OkNivLapl(int aNiv);
        double GetLapl(int aNiv,const Pt2di & aP,bool &Ok);

        cOneScaleImRechPH * GetImOfNiv(int aNiv);
        void ComputeContrast();
        bool ComputeContrastePt(cOnePCarac & aPt);
        tInterpolNRPH * Interp() {return mInterp;}

        bool ScaleCorr() {return mScaleCorr;}

        bool  ScaleIsValid(double aScale )   const  
        {
           return   (aScale>=mISF.x) && (aScale<=mISF.y);
        }
        void AdaptScaleValide(cOnePCarac & aPC);

        double IndScalDecim(const double & ) const;

    private :
        Pt2di PIndex2(const Pt2di & aP) const;
        tLPtBuf & LPOfBuf2(const Pt2dr & aP);
        
        void AddScale(cOneScaleImRechPH *,cOneScaleImRechPH *);
        void Clik();
        bool  CalvInvariantRot(cOnePCarac & aPt);

        std::string mName;
        double      mNbByOct;    // Nombre d'echelle dans une puisse de 2
        double      mPowS;       // Ratio d'echelle entre 2
        double      mEch0Decim;  // Premiere echelle de decimation
        int         mNbS;

        Pt2dr   mISF; // Interval Scale Forced

/*
  Invariant Rotation
*/
        double      mStepSR;  // Pas entre les pixel de reechantillonage pour les desc
        bool        mRollNorm; // si true , normalisation par fenetre glissante, :
        int         mNbSR2Use;     // Nbre de niveau pour utilisation
        int         mNbSR2Calc;     // Nbre de niveau a calculer, different si rolling
        int         mDeltaSR;  // Delta entre deux niveau radiaux, genre 1 ou 2 ?
        int         mMaxLevR;  // Niv max permettant le calcul (calcule a partir des autres)

        int         mNbTetaIm;  // Assez si on veut pouvoir interpoler entre les angles pour recalage
        int         mMulNbTetaInv; // Comme ceux pour l'invariance ne coutent pas très cher, on a interet a en mettre + ?
        int         mNbTetaInv; // Calcule, 


        double      mS0;
        double      mScaleStab;  // Scale for selection of Gray Min/Max
        double      mSeuilAC;
        double      mSeuilCR; // Contraste relatif
        bool        mScaleCorr;
        Pt2di       mSzIm;
        Box2di      mBoxCalc;
        Pt2di       mP0Calc; // P0-P1 => "vrai" box
        Pt2di       mP1Calc;

        std::vector<cOneScaleImRechPH *> mVI1;
        std::vector<cOneScaleImRechPH *> mVImHS; // Celle qui ont une echelle eventuellement plus large
        Video_Win  * mW1;
        bool         mModeTest;
    

        double       mDistMinMax;
        bool         mDoMin;
        bool         mDoMax;
        bool         mDoPly;
        cPlyCloud *  mPlyC;
        double       mDZPlyLay;
        double       mNbInOct;  // Number in one octave

        int                                    mDeZoomLn2;
        Pt2di                                  mSzLn2;
        std::vector<std::vector<tLPtBuf> >     mBufLnk2;

        std::vector<Pt2di>                      mVoisLnk;
        std::vector<cBrinPtRemark *>            mVecB;
        std::vector<int>                        mHistLong;
        std::vector<int>                        mHistN0;
        std::string                             mExtSave;
        bool                                    mBasic;
        bool                                    mAddModeSift;
        bool                                    mAddModeTopo;
        bool                                    mLapMS;
        bool                                    mTestDirac;
        bool                                    mSaveFileLapl;
        // double                                  mPropCtrsIm0;
        // double                                  mThreshCstrIm0;  /// Computed on first lapla

        int     mNbSpace;
        int     mNbScaleSpace;
        int     mNbScaleSpaceCstr;

        double  mDistAttenContr;  // 20
        double  mPropContrAbs;    // 0.2
        int     mSzContrast;      // 2
        double  mPropCalcContr;   // 0.25


        tImNRPH   mIm0;
        tTImNRPH  mTIm0;
        tImNRPH   mImContrast;
        tTImNRPH  mTImContrast;
        tInterpolNRPH * mInterp;
};

class cProfilPC
{
    public :

        Im2D_INT1 mIm;
        INT1 **   mData;
        Pt2di     mSz;

        cProfilPC (Im2D_INT1);
        cProfilPC (const cProfilPC &,int TODifferentiataFROMConstructeur);

        // int    ComputeShiftAllChannel(const cProfilPC & aCP,int aChanel) const;
        int    ComputeShiftOneChannel(const cProfilPC & aCP,int aChanel) const;
        int    ComputeCorrelOneChannelOneShift(const cProfilPC & aCP,int aChanel,int aShift) const;
        int    OptimiseLocOneShift(const cProfilPC & aCP,int aChanel,int aShift0) const;



    private :
        // cProfilPC (const cProfilPC &) =delete;
};

struct cTimeMatch
{
   public:
     cTimeMatch();
     void Show();

   // private:
     double  mTBinRad;
     double  mTBinLong;
     double  mTDistRad;
     double  mTShif;
     double  mTDist;
};

class cCompileOPC
{
    public :

      // Return -1 si arret avant correl
      double  Match(bool Overlap,cCompileOPC & aCP2,const cFitsOneLabel &,const cSeuilFitsParam &,int & aShift,int & aLevFail,cTimeMatch *);
      std::vector<double>  Time(cCompileOPC & aCP2,const cFitsParam & aFP);



      cCompileOPC(const cOnePCarac & aOPC) ;

      double   ValCB(const cCompCBOneBit & aCCOB) const;
      int  ShortFlag(const cCompCB & aCOB) const;
      int  ShortFlag(const cCompCB & aCOB,int aK0,int aK1) const;
      tCodBin  LongFlag(const cCompCB & aCOB) const;

      void AddFlag(const cCompCB & aCOB,Im1D_REAL8 aImH) const;


      double DistIR(const cCompileOPC & aCP) const; // Dist inv to Rad
 

      int  HeuristikComputeShiftOneC(const cCompileOPC & aCP,int aChanel) const;
      int  ComputeShiftOneC(const cCompileOPC & aCP,int aChanel) const;
      int  ComputeShiftGlob(const cCompileOPC & aCP,double & anInc) const;
      int  RobustShift(const std::vector<int> & aVS,double & Incoh) const;


      double DistIm(const cCompileOPC & aCP,int aShiftIm2) const;
      inline int DifPer(int,int) const;
      void SetFlag(const cFitsOneLabel & aFOL,bool Overlap);
      int DifShortF(const cCompileOPC &,bool Overlap);
      int DifLongF(const cCompileOPC &,bool Overlap);

      // double DistShift(const cCompileOPC & aCP,int aChanel,int aShiftIm2) const;


      cOnePCarac   mOPC;
      INT1 **      mDR;
      Pt2di        mSzIR;
      INT1 **      mIm;
      Pt2di        mSzIm;
      INT1 **      mProf;
      Pt2di        mSzProf;
      int          mNbTeta;

      // Overlap
      int          mOL_ShortFlag;
      tCodBin      mOL_LongFlag;
      bool         mOL_FlagIsComp;
      // Decision
      int          mDec_ShortFlag;
      tCodBin      mDec_LongFlag;
      bool         mDec_FlagIsComp;

      int          mTmpNbHom;

      std::vector<cProfilPC> mVProf;
};




#endif //  _NewRechPH_H_


/*Footer-MicMac-eLiSe-25/06/2007

Ce logiciel est un programme informatique servant à la mise en
correspondances d'images pour la reconstruction du relief.

Ce logiciel est régi par la licence CeCILL-B soumise au droit français et
respectant les principes de diffusion des logiciels libres. Vous pouvez
utiliser, modifier et/ou redistribuer ce programme sous les conditions
de la licence CeCILL-B telle que diffusée par le CEA, le CNRS et l'INRIA 
sur le site "http://www.cecill.info".

En contrepartie de l'accessibilité au code source et des droits de copie,
de modification et de redistribution accordés par cette licence, il n'est
offert aux utilisateurs qu'une garantie limitée.  Pour les mêmes raisons,
seule une responsabilité restreinte pèse sur l'auteur du programme,  le
titulaire des droits patrimoniaux et les concédants successifs.

A cet égard  l'attention de l'utilisateur est attirée sur les risques
associés au chargement,  à l'utilisation,  à la modification et/ou au
développement et à la reproduction du logiciel par l'utilisateur étant 
donné sa spécificité de logiciel libre, qui peut le rendre complexe à 
manipuler et qui le réserve donc à des développeurs et des professionnels
avertis possédant  des  connaissances  informatiques approfondies.  Les
utilisateurs sont donc invités à charger  et  tester  l'adéquation  du
logiciel à leurs besoins dans des conditions permettant d'assurer la
sécurité de leurs systèmes et ou de leurs données et, plus généralement, 
à l'utiliser et l'exploiter dans les mêmes conditions de sécurité. 

Le fait que vous puissiez accéder à cet en-tête signifie que vous avez 
pris connaissance de la licence CeCILL-B, et que vous en avez accepté les
termes.
aooter-MicMac-eLiSe-25/06/2007*/
