// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistVal_DRad5APFraser.h"


cREgDistVal_DRad5APFraser::cREgDistVal_DRad5APFraser():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,14));
   Close(false);
}



void cREgDistVal_DRad5APFraser::ComputeVal()
{
   double tmp0_ = mCompCoord[3];
   double tmp1_ = mLocRegDistValP1_x - tmp0_;
   double tmp2_ = mCompCoord[4];
   double tmp3_ = mLocRegDistValP1_y - tmp2_;
   double tmp4_ = (tmp1_) * (tmp1_);
   double tmp5_ = (tmp3_) * (tmp3_);
   double tmp6_ = tmp4_ + tmp5_;
   double tmp7_ = (tmp6_) * (tmp6_);
   double tmp8_ = tmp7_ * (tmp6_);
   double tmp9_ = tmp8_ * (tmp6_);
   double tmp10_ = ElSquare(tmp1_);
   double tmp11_ = mCompCoord[5];
   double tmp12_ = (tmp6_) * tmp11_;
   double tmp13_ = 1 + tmp12_;
   double tmp14_ = mCompCoord[6];
   double tmp15_ = tmp7_ * tmp14_;
   double tmp16_ = tmp13_ + tmp15_;
   double tmp17_ = mCompCoord[7];
   double tmp18_ = tmp8_ * tmp17_;
   double tmp19_ = tmp16_ + tmp18_;
   double tmp20_ = mCompCoord[8];
   double tmp21_ = tmp9_ * tmp20_;
   double tmp22_ = tmp19_ + tmp21_;
   double tmp23_ = tmp9_ * (tmp6_);
   double tmp24_ = mCompCoord[9];
   double tmp25_ = tmp23_ * tmp24_;
   double tmp26_ = tmp22_ + tmp25_;
   double tmp27_ = ElSquare(tmp3_);
   double tmp28_ = tmp10_ + tmp27_;
   double tmp29_ = mCompCoord[11];
   double tmp30_ = 2 * (tmp1_);
   double tmp31_ = tmp30_ * (tmp3_);
   double tmp32_ = mCompCoord[10];

  mVal[0] = (tmp0_ + (tmp1_) * (tmp26_) + (2 * tmp10_ + tmp28_) * tmp32_ + tmp31_ * tmp29_ + mCompCoord[12] * (tmp1_) + mCompCoord[13] * (tmp3_)) - mLocRegDistKnownVal_x;

  mVal[1] = (tmp2_ + (tmp3_) * (tmp26_) + (2 * tmp27_ + tmp28_) * tmp29_ + tmp31_ * tmp32_) - mLocRegDistKnownVal_y;

}


void cREgDistVal_DRad5APFraser::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[3];
   double tmp1_ = mLocRegDistValP1_x - tmp0_;
   double tmp2_ = mCompCoord[4];
   double tmp3_ = mLocRegDistValP1_y - tmp2_;
   double tmp4_ = (tmp1_) * (tmp1_);
   double tmp5_ = (tmp3_) * (tmp3_);
   double tmp6_ = tmp4_ + tmp5_;
   double tmp7_ = (tmp6_) * (tmp6_);
   double tmp8_ = tmp7_ * (tmp6_);
   double tmp9_ = tmp8_ * (tmp6_);
   double tmp10_ = ElSquare(tmp1_);
   double tmp11_ = mCompCoord[5];
   double tmp12_ = (tmp6_) * tmp11_;
   double tmp13_ = 1 + tmp12_;
   double tmp14_ = mCompCoord[6];
   double tmp15_ = tmp7_ * tmp14_;
   double tmp16_ = tmp13_ + tmp15_;
   double tmp17_ = mCompCoord[7];
   double tmp18_ = tmp8_ * tmp17_;
   double tmp19_ = tmp16_ + tmp18_;
   double tmp20_ = mCompCoord[8];
   double tmp21_ = tmp9_ * tmp20_;
   double tmp22_ = tmp19_ + tmp21_;
   double tmp23_ = tmp9_ * (tmp6_);
   double tmp24_ = mCompCoord[9];
   double tmp25_ = tmp23_ * tmp24_;
   double tmp26_ = tmp22_ + tmp25_;
   double tmp27_ = -(1);
   double tmp28_ = tmp27_ * (tmp1_);
   double tmp29_ = tmp28_ + tmp28_;
   double tmp30_ = (tmp29_) * (tmp6_);
   double tmp31_ = tmp30_ + tmp30_;
   double tmp32_ = (tmp31_) * (tmp6_);
   double tmp33_ = (tmp29_) * tmp7_;
   double tmp34_ = tmp32_ + tmp33_;
   double tmp35_ = (tmp34_) * (tmp6_);
   double tmp36_ = (tmp29_) * tmp8_;
   double tmp37_ = tmp35_ + tmp36_;
   double tmp38_ = 2 * tmp27_;
   double tmp39_ = tmp38_ * (tmp1_);
   double tmp40_ = mCompCoord[10];
   double tmp41_ = mCompCoord[11];
   double tmp42_ = mCompCoord[12];
   double tmp43_ = tmp27_ * (tmp3_);
   double tmp44_ = tmp43_ + tmp43_;
   double tmp45_ = (tmp44_) * (tmp6_);
   double tmp46_ = tmp45_ + tmp45_;
   double tmp47_ = (tmp46_) * (tmp6_);
   double tmp48_ = (tmp44_) * tmp7_;
   double tmp49_ = tmp47_ + tmp48_;
   double tmp50_ = (tmp49_) * (tmp6_);
   double tmp51_ = (tmp44_) * tmp8_;
   double tmp52_ = tmp50_ + tmp51_;
   double tmp53_ = 2 * (tmp1_);
   double tmp54_ = mCompCoord[13];
   double tmp55_ = 2 * tmp10_;
   double tmp56_ = ElSquare(tmp3_);
   double tmp57_ = tmp10_ + tmp56_;
   double tmp58_ = tmp55_ + tmp57_;
   double tmp59_ = tmp53_ * (tmp3_);
   double tmp60_ = (tmp29_) * tmp11_;
   double tmp61_ = (tmp31_) * tmp14_;
   double tmp62_ = tmp60_ + tmp61_;
   double tmp63_ = (tmp34_) * tmp17_;
   double tmp64_ = tmp62_ + tmp63_;
   double tmp65_ = (tmp37_) * tmp20_;
   double tmp66_ = tmp64_ + tmp65_;
   double tmp67_ = (tmp37_) * (tmp6_);
   double tmp68_ = (tmp29_) * tmp9_;
   double tmp69_ = tmp67_ + tmp68_;
   double tmp70_ = (tmp69_) * tmp24_;
   double tmp71_ = tmp66_ + tmp70_;
   double tmp72_ = tmp27_ * 2;
   double tmp73_ = tmp72_ * (tmp3_);
   double tmp74_ = tmp27_ * (tmp26_);
   double tmp75_ = (tmp44_) * tmp11_;
   double tmp76_ = (tmp46_) * tmp14_;
   double tmp77_ = tmp75_ + tmp76_;
   double tmp78_ = (tmp49_) * tmp17_;
   double tmp79_ = tmp77_ + tmp78_;
   double tmp80_ = (tmp52_) * tmp20_;
   double tmp81_ = tmp79_ + tmp80_;
   double tmp82_ = (tmp52_) * (tmp6_);
   double tmp83_ = (tmp44_) * tmp9_;
   double tmp84_ = tmp82_ + tmp83_;
   double tmp85_ = (tmp84_) * tmp24_;
   double tmp86_ = tmp81_ + tmp85_;
   double tmp87_ = tmp38_ * (tmp3_);
   double tmp88_ = tmp27_ * tmp53_;
   double tmp89_ = 2 * tmp56_;
   double tmp90_ = tmp89_ + tmp57_;

  mVal[0] = (tmp0_ + (tmp1_) * (tmp26_) + (tmp58_) * tmp40_ + tmp59_ * tmp41_ + tmp42_ * (tmp1_) + tmp54_ * (tmp3_)) - mLocRegDistKnownVal_x;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = 1 + tmp74_ + (tmp71_) * (tmp1_) + (tmp39_ * 2 + tmp39_) * tmp40_ + tmp73_ * tmp41_ + tmp27_ * tmp42_;
  mCompDer[0][4] = (tmp86_) * (tmp1_) + tmp87_ * tmp40_ + tmp88_ * tmp41_ + tmp27_ * tmp54_;
  mCompDer[0][5] = (tmp6_) * (tmp1_);
  mCompDer[0][6] = tmp7_ * (tmp1_);
  mCompDer[0][7] = tmp8_ * (tmp1_);
  mCompDer[0][8] = tmp9_ * (tmp1_);
  mCompDer[0][9] = tmp23_ * (tmp1_);
  mCompDer[0][10] = tmp58_;
  mCompDer[0][11] = tmp59_;
  mCompDer[0][12] = tmp1_;
  mCompDer[0][13] = tmp3_;
  mVal[1] = (tmp2_ + (tmp3_) * (tmp26_) + (tmp90_) * tmp41_ + tmp59_ * tmp40_) - mLocRegDistKnownVal_y;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
  mCompDer[1][3] = (tmp71_) * (tmp3_) + tmp39_ * tmp41_ + tmp73_ * tmp40_;
  mCompDer[1][4] = 1 + tmp74_ + (tmp86_) * (tmp3_) + (tmp87_ * 2 + tmp87_) * tmp41_ + tmp88_ * tmp40_;
  mCompDer[1][5] = (tmp6_) * (tmp3_);
  mCompDer[1][6] = tmp7_ * (tmp3_);
  mCompDer[1][7] = tmp8_ * (tmp3_);
  mCompDer[1][8] = tmp9_ * (tmp3_);
  mCompDer[1][9] = tmp23_ * (tmp3_);
  mCompDer[1][10] = tmp59_;
  mCompDer[1][11] = tmp90_;
  mCompDer[1][12] = 0;
  mCompDer[1][13] = 0;
}


void cREgDistVal_DRad5APFraser::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistVal_DRad5APFraser Has no Der Sec");
}

void cREgDistVal_DRad5APFraser::SetRegDistKnownVal_x(double aVal){ mLocRegDistKnownVal_x = aVal;}
void cREgDistVal_DRad5APFraser::SetRegDistKnownVal_y(double aVal){ mLocRegDistKnownVal_y = aVal;}
void cREgDistVal_DRad5APFraser::SetRegDistValP1_x(double aVal){ mLocRegDistValP1_x = aVal;}
void cREgDistVal_DRad5APFraser::SetRegDistValP1_y(double aVal){ mLocRegDistValP1_y = aVal;}



double * cREgDistVal_DRad5APFraser::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "RegDistKnownVal_x") return & mLocRegDistKnownVal_x;
   if (aName == "RegDistKnownVal_y") return & mLocRegDistKnownVal_y;
   if (aName == "RegDistValP1_x") return & mLocRegDistValP1_x;
   if (aName == "RegDistValP1_y") return & mLocRegDistValP1_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistVal_DRad5APFraser::mTheAuto("cREgDistVal_DRad5APFraser",cREgDistVal_DRad5APFraser::Alloc);


cElCompiledFonc *  cREgDistVal_DRad5APFraser::Alloc()
{  return new cREgDistVal_DRad5APFraser();
}

