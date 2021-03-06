// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_Y_M2CDCBrown.h"


cEqAppui_Y_M2CDCBrown::cEqAppui_Y_M2CDCBrown():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,17));
   AddIntRef (cIncIntervale("Orient",17,23));
   Close(false);
}



void cEqAppui_Y_M2CDCBrown::ComputeVal()
{
   double tmp0_ = mCompCoord[17];
   double tmp1_ = mCompCoord[19];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[18];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[20];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[21];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[22];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = mCompCoord[0];
   double tmp21_ = tmp9_*tmp13_;
   double tmp22_ = tmp10_*tmp3_;
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp12_);
   double tmp25_ = tmp2_*tmp13_;
   double tmp26_ = tmp14_*tmp3_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = (tmp27_)*(tmp16_);
   double tmp29_ = tmp24_+tmp28_;
   double tmp30_ = tmp17_*tmp3_;
   double tmp31_ = tmp30_*(tmp19_);
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = mCompCoord[2];
   double tmp34_ = tmp9_*tmp3_;
   double tmp35_ = tmp10_*tmp8_;
   double tmp36_ = tmp34_+tmp35_;
   double tmp37_ = (tmp36_)*(tmp12_);
   double tmp38_ = tmp2_*tmp3_;
   double tmp39_ = tmp14_*tmp8_;
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)*(tmp16_);
   double tmp42_ = tmp37_+tmp41_;
   double tmp43_ = tmp17_*tmp8_;
   double tmp44_ = tmp43_*(tmp19_);
   double tmp45_ = tmp42_+tmp44_;
   double tmp46_ = (tmp45_)/(tmp32_);
   double tmp47_ = tmp20_*(tmp46_);
   double tmp48_ = tmp33_+tmp47_;
   double tmp49_ = mCompCoord[1];
   double tmp50_ = tmp2_*tmp17_;
   double tmp51_ = tmp50_*(tmp12_);
   double tmp52_ = tmp4_*tmp17_;
   double tmp53_ = tmp52_*(tmp16_);
   double tmp54_ = tmp51_+tmp53_;
   double tmp55_ = tmp6_*(tmp19_);
   double tmp56_ = tmp54_+tmp55_;
   double tmp57_ = (tmp56_)/(tmp32_);
   double tmp58_ = tmp20_*(tmp57_);
   double tmp59_ = tmp49_+tmp58_;
   double tmp60_ = (tmp59_)*(tmp59_);
   double tmp61_ = (tmp48_)*(tmp48_);
   double tmp62_ = tmp60_*tmp61_;

  mVal[0] = (tmp48_+mCompCoord[10]*(tmp59_)*(tmp48_)+mCompCoord[11]*tmp60_+mCompCoord[12]*tmp60_*(tmp48_)+mCompCoord[13]*(tmp59_)*tmp61_+mCompCoord[14]*tmp62_+mCompCoord[15]*((tmp48_)/mLocDCBrown_State_0_0)*tmp62_+mCompCoord[16]*(tmp48_)*(tmp60_+tmp61_))-mLocYIm;

}


void cEqAppui_Y_M2CDCBrown::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[17];
   double tmp1_ = mCompCoord[19];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[18];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[20];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[21];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[22];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = mCompCoord[0];
   double tmp21_ = tmp9_*tmp13_;
   double tmp22_ = tmp10_*tmp3_;
   double tmp23_ = tmp21_+tmp22_;
   double tmp24_ = (tmp23_)*(tmp12_);
   double tmp25_ = tmp2_*tmp13_;
   double tmp26_ = tmp14_*tmp3_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = (tmp27_)*(tmp16_);
   double tmp29_ = tmp24_+tmp28_;
   double tmp30_ = tmp17_*tmp3_;
   double tmp31_ = tmp30_*(tmp19_);
   double tmp32_ = tmp29_+tmp31_;
   double tmp33_ = mCompCoord[2];
   double tmp34_ = tmp9_*tmp3_;
   double tmp35_ = tmp10_*tmp8_;
   double tmp36_ = tmp34_+tmp35_;
   double tmp37_ = (tmp36_)*(tmp12_);
   double tmp38_ = tmp2_*tmp3_;
   double tmp39_ = tmp14_*tmp8_;
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = (tmp40_)*(tmp16_);
   double tmp42_ = tmp37_+tmp41_;
   double tmp43_ = tmp17_*tmp8_;
   double tmp44_ = tmp43_*(tmp19_);
   double tmp45_ = tmp42_+tmp44_;
   double tmp46_ = (tmp45_)/(tmp32_);
   double tmp47_ = tmp20_*(tmp46_);
   double tmp48_ = tmp33_+tmp47_;
   double tmp49_ = mCompCoord[1];
   double tmp50_ = tmp2_*tmp17_;
   double tmp51_ = tmp50_*(tmp12_);
   double tmp52_ = tmp4_*tmp17_;
   double tmp53_ = tmp52_*(tmp16_);
   double tmp54_ = tmp51_+tmp53_;
   double tmp55_ = tmp6_*(tmp19_);
   double tmp56_ = tmp54_+tmp55_;
   double tmp57_ = (tmp56_)/(tmp32_);
   double tmp58_ = tmp20_*(tmp57_);
   double tmp59_ = tmp49_+tmp58_;
   double tmp60_ = (tmp59_)*(tmp59_);
   double tmp61_ = (tmp48_)*(tmp48_);
   double tmp62_ = tmp60_*tmp61_;
   double tmp63_ = mCompCoord[10];
   double tmp64_ = (tmp57_)*(tmp59_);
   double tmp65_ = mCompCoord[11];
   double tmp66_ = tmp64_+tmp64_;
   double tmp67_ = mCompCoord[12];
   double tmp68_ = (tmp46_)*(tmp48_);
   double tmp69_ = mCompCoord[13];
   double tmp70_ = tmp68_+tmp68_;
   double tmp71_ = mCompCoord[14];
   double tmp72_ = mCompCoord[15];
   double tmp73_ = (tmp66_)*tmp61_;
   double tmp74_ = (tmp70_)*tmp60_;
   double tmp75_ = tmp73_+tmp74_;
   double tmp76_ = (tmp48_)/mLocDCBrown_State_0_0;
   double tmp77_ = tmp72_*(tmp76_);
   double tmp78_ = mCompCoord[16];
   double tmp79_ = tmp60_+tmp61_;
   double tmp80_ = tmp78_*(tmp48_);
   double tmp81_ = tmp59_+tmp59_;
   double tmp82_ = (tmp81_)*tmp61_;
   double tmp83_ = tmp48_+tmp48_;
   double tmp84_ = ElSquare(mLocDCBrown_State_0_0);
   double tmp85_ = (tmp83_)*tmp60_;
   double tmp86_ = (tmp59_)*(tmp48_);
   double tmp87_ = tmp60_*(tmp48_);
   double tmp88_ = (tmp59_)*tmp61_;
   double tmp89_ = -(1);
   double tmp90_ = tmp89_*tmp4_;
   double tmp91_ = -(tmp2_);
   double tmp92_ = tmp90_*tmp7_;
   double tmp93_ = tmp91_*tmp13_;
   double tmp94_ = tmp92_*tmp3_;
   double tmp95_ = tmp93_+tmp94_;
   double tmp96_ = (tmp95_)*(tmp12_);
   double tmp97_ = tmp90_*tmp13_;
   double tmp98_ = tmp97_+tmp22_;
   double tmp99_ = (tmp98_)*(tmp16_);
   double tmp100_ = tmp96_+tmp99_;
   double tmp101_ = ElSquare(tmp32_);
   double tmp102_ = tmp91_*tmp3_;
   double tmp103_ = tmp92_*tmp8_;
   double tmp104_ = tmp102_+tmp103_;
   double tmp105_ = (tmp104_)*(tmp12_);
   double tmp106_ = tmp90_*tmp3_;
   double tmp107_ = tmp106_+tmp35_;
   double tmp108_ = (tmp107_)*(tmp16_);
   double tmp109_ = tmp105_+tmp108_;
   double tmp110_ = (tmp109_)*(tmp32_);
   double tmp111_ = (tmp45_)*(tmp100_);
   double tmp112_ = tmp110_-tmp111_;
   double tmp113_ = (tmp112_)/tmp101_;
   double tmp114_ = (tmp113_)*tmp20_;
   double tmp115_ = tmp90_*tmp17_;
   double tmp116_ = tmp115_*(tmp12_);
   double tmp117_ = tmp50_*(tmp16_);
   double tmp118_ = tmp116_+tmp117_;
   double tmp119_ = (tmp118_)*(tmp32_);
   double tmp120_ = (tmp56_)*(tmp100_);
   double tmp121_ = tmp119_-tmp120_;
   double tmp122_ = (tmp121_)/tmp101_;
   double tmp123_ = (tmp122_)*tmp20_;
   double tmp124_ = tmp123_*(tmp59_);
   double tmp125_ = tmp124_+tmp124_;
   double tmp126_ = tmp114_*(tmp48_);
   double tmp127_ = tmp126_+tmp126_;
   double tmp128_ = (tmp125_)*tmp61_;
   double tmp129_ = (tmp127_)*tmp60_;
   double tmp130_ = tmp128_+tmp129_;
   double tmp131_ = -(tmp17_);
   double tmp132_ = tmp131_*tmp2_;
   double tmp133_ = tmp131_*tmp4_;
   double tmp134_ = tmp89_*tmp6_;
   double tmp135_ = tmp132_*tmp3_;
   double tmp136_ = tmp135_*(tmp12_);
   double tmp137_ = tmp133_*tmp3_;
   double tmp138_ = tmp137_*(tmp16_);
   double tmp139_ = tmp136_+tmp138_;
   double tmp140_ = tmp134_*tmp3_;
   double tmp141_ = tmp140_*(tmp19_);
   double tmp142_ = tmp139_+tmp141_;
   double tmp143_ = tmp132_*tmp8_;
   double tmp144_ = tmp143_*(tmp12_);
   double tmp145_ = tmp133_*tmp8_;
   double tmp146_ = tmp145_*(tmp16_);
   double tmp147_ = tmp144_+tmp146_;
   double tmp148_ = tmp134_*tmp8_;
   double tmp149_ = tmp148_*(tmp19_);
   double tmp150_ = tmp147_+tmp149_;
   double tmp151_ = (tmp150_)*(tmp32_);
   double tmp152_ = (tmp45_)*(tmp142_);
   double tmp153_ = tmp151_-tmp152_;
   double tmp154_ = (tmp153_)/tmp101_;
   double tmp155_ = (tmp154_)*tmp20_;
   double tmp156_ = tmp134_*tmp2_;
   double tmp157_ = tmp156_*(tmp12_);
   double tmp158_ = tmp134_*tmp4_;
   double tmp159_ = tmp158_*(tmp16_);
   double tmp160_ = tmp157_+tmp159_;
   double tmp161_ = tmp17_*(tmp19_);
   double tmp162_ = tmp160_+tmp161_;
   double tmp163_ = (tmp162_)*(tmp32_);
   double tmp164_ = (tmp56_)*(tmp142_);
   double tmp165_ = tmp163_-tmp164_;
   double tmp166_ = (tmp165_)/tmp101_;
   double tmp167_ = (tmp166_)*tmp20_;
   double tmp168_ = tmp167_*(tmp59_);
   double tmp169_ = tmp168_+tmp168_;
   double tmp170_ = tmp155_*(tmp48_);
   double tmp171_ = tmp170_+tmp170_;
   double tmp172_ = (tmp169_)*tmp61_;
   double tmp173_ = (tmp171_)*tmp60_;
   double tmp174_ = tmp172_+tmp173_;
   double tmp175_ = tmp89_*tmp8_;
   double tmp176_ = -(tmp3_);
   double tmp177_ = tmp176_*tmp9_;
   double tmp178_ = tmp175_*tmp10_;
   double tmp179_ = tmp177_+tmp178_;
   double tmp180_ = (tmp179_)*(tmp12_);
   double tmp181_ = tmp176_*tmp2_;
   double tmp182_ = tmp175_*tmp14_;
   double tmp183_ = tmp181_+tmp182_;
   double tmp184_ = (tmp183_)*(tmp16_);
   double tmp185_ = tmp180_+tmp184_;
   double tmp186_ = tmp175_*tmp17_;
   double tmp187_ = tmp186_*(tmp19_);
   double tmp188_ = tmp185_+tmp187_;
   double tmp189_ = tmp175_*tmp9_;
   double tmp190_ = tmp3_*tmp10_;
   double tmp191_ = tmp189_+tmp190_;
   double tmp192_ = (tmp191_)*(tmp12_);
   double tmp193_ = tmp175_*tmp2_;
   double tmp194_ = tmp3_*tmp14_;
   double tmp195_ = tmp193_+tmp194_;
   double tmp196_ = (tmp195_)*(tmp16_);
   double tmp197_ = tmp192_+tmp196_;
   double tmp198_ = tmp3_*tmp17_;
   double tmp199_ = tmp198_*(tmp19_);
   double tmp200_ = tmp197_+tmp199_;
   double tmp201_ = (tmp200_)*(tmp32_);
   double tmp202_ = (tmp45_)*(tmp188_);
   double tmp203_ = tmp201_-tmp202_;
   double tmp204_ = (tmp203_)/tmp101_;
   double tmp205_ = (tmp204_)*tmp20_;
   double tmp206_ = (tmp56_)*(tmp188_);
   double tmp207_ = -(tmp206_);
   double tmp208_ = tmp207_/tmp101_;
   double tmp209_ = (tmp208_)*tmp20_;
   double tmp210_ = tmp209_*(tmp59_);
   double tmp211_ = tmp210_+tmp210_;
   double tmp212_ = tmp205_*(tmp48_);
   double tmp213_ = tmp212_+tmp212_;
   double tmp214_ = (tmp211_)*tmp61_;
   double tmp215_ = (tmp213_)*tmp60_;
   double tmp216_ = tmp214_+tmp215_;
   double tmp217_ = tmp89_*(tmp23_);
   double tmp218_ = tmp89_*(tmp36_);
   double tmp219_ = tmp218_*(tmp32_);
   double tmp220_ = (tmp45_)*tmp217_;
   double tmp221_ = tmp219_-tmp220_;
   double tmp222_ = (tmp221_)/tmp101_;
   double tmp223_ = (tmp222_)*tmp20_;
   double tmp224_ = tmp89_*tmp50_;
   double tmp225_ = tmp224_*(tmp32_);
   double tmp226_ = (tmp56_)*tmp217_;
   double tmp227_ = tmp225_-tmp226_;
   double tmp228_ = (tmp227_)/tmp101_;
   double tmp229_ = (tmp228_)*tmp20_;
   double tmp230_ = tmp229_*(tmp59_);
   double tmp231_ = tmp230_+tmp230_;
   double tmp232_ = tmp223_*(tmp48_);
   double tmp233_ = tmp232_+tmp232_;
   double tmp234_ = (tmp231_)*tmp61_;
   double tmp235_ = (tmp233_)*tmp60_;
   double tmp236_ = tmp234_+tmp235_;
   double tmp237_ = tmp89_*(tmp27_);
   double tmp238_ = tmp89_*(tmp40_);
   double tmp239_ = tmp238_*(tmp32_);
   double tmp240_ = (tmp45_)*tmp237_;
   double tmp241_ = tmp239_-tmp240_;
   double tmp242_ = (tmp241_)/tmp101_;
   double tmp243_ = (tmp242_)*tmp20_;
   double tmp244_ = tmp89_*tmp52_;
   double tmp245_ = tmp244_*(tmp32_);
   double tmp246_ = (tmp56_)*tmp237_;
   double tmp247_ = tmp245_-tmp246_;
   double tmp248_ = (tmp247_)/tmp101_;
   double tmp249_ = (tmp248_)*tmp20_;
   double tmp250_ = tmp249_*(tmp59_);
   double tmp251_ = tmp250_+tmp250_;
   double tmp252_ = tmp243_*(tmp48_);
   double tmp253_ = tmp252_+tmp252_;
   double tmp254_ = (tmp251_)*tmp61_;
   double tmp255_ = (tmp253_)*tmp60_;
   double tmp256_ = tmp254_+tmp255_;
   double tmp257_ = tmp89_*tmp30_;
   double tmp258_ = tmp89_*tmp43_;
   double tmp259_ = tmp258_*(tmp32_);
   double tmp260_ = (tmp45_)*tmp257_;
   double tmp261_ = tmp259_-tmp260_;
   double tmp262_ = (tmp261_)/tmp101_;
   double tmp263_ = (tmp262_)*tmp20_;
   double tmp264_ = tmp134_*(tmp32_);
   double tmp265_ = (tmp56_)*tmp257_;
   double tmp266_ = tmp264_-tmp265_;
   double tmp267_ = (tmp266_)/tmp101_;
   double tmp268_ = (tmp267_)*tmp20_;
   double tmp269_ = tmp268_*(tmp59_);
   double tmp270_ = tmp269_+tmp269_;
   double tmp271_ = tmp263_*(tmp48_);
   double tmp272_ = tmp271_+tmp271_;
   double tmp273_ = (tmp270_)*tmp61_;
   double tmp274_ = (tmp272_)*tmp60_;
   double tmp275_ = tmp273_+tmp274_;

  mVal[0] = (tmp48_+tmp63_*tmp86_+tmp65_*tmp60_+tmp67_*tmp87_+tmp69_*tmp88_+tmp71_*tmp62_+tmp77_*tmp62_+tmp80_*(tmp79_))-mLocYIm;

  mCompDer[0][0] = tmp46_+((tmp57_)*(tmp48_)+(tmp46_)*(tmp59_))*tmp63_+(tmp66_)*tmp65_+((tmp66_)*(tmp48_)+(tmp46_)*tmp60_)*tmp67_+((tmp57_)*tmp61_+(tmp70_)*(tmp59_))*tmp69_+(tmp75_)*tmp71_+(((tmp46_)*mLocDCBrown_State_0_0)/tmp84_)*tmp72_*tmp62_+(tmp75_)*tmp77_+(tmp46_)*tmp78_*(tmp79_)+(tmp66_+tmp70_)*tmp80_;
  mCompDer[0][1] = (tmp48_)*tmp63_+(tmp81_)*tmp65_+(tmp81_)*(tmp48_)*tmp67_+tmp61_*tmp69_+tmp82_*tmp71_+tmp82_*tmp77_+(tmp81_)*tmp80_;
  mCompDer[0][2] = 1+(tmp59_)*tmp63_+tmp60_*tmp67_+(tmp83_)*(tmp59_)*tmp69_+tmp85_*tmp71_+(mLocDCBrown_State_0_0/tmp84_)*tmp72_*tmp62_+tmp85_*tmp77_+tmp78_*(tmp79_)+(tmp83_)*tmp80_;
  mCompDer[0][3] = 0;
  mCompDer[0][4] = 0;
  mCompDer[0][5] = 0;
  mCompDer[0][6] = 0;
  mCompDer[0][7] = 0;
  mCompDer[0][8] = 0;
  mCompDer[0][9] = 0;
  mCompDer[0][10] = tmp86_;
  mCompDer[0][11] = tmp60_;
  mCompDer[0][12] = tmp87_;
  mCompDer[0][13] = tmp88_;
  mCompDer[0][14] = tmp62_;
  mCompDer[0][15] = (tmp76_)*tmp62_;
  mCompDer[0][16] = (tmp48_)*(tmp79_);
  mCompDer[0][17] = tmp114_+(tmp123_*(tmp48_)+tmp114_*(tmp59_))*tmp63_+(tmp125_)*tmp65_+((tmp125_)*(tmp48_)+tmp114_*tmp60_)*tmp67_+(tmp123_*tmp61_+(tmp127_)*(tmp59_))*tmp69_+(tmp130_)*tmp71_+((tmp114_*mLocDCBrown_State_0_0)/tmp84_)*tmp72_*tmp62_+(tmp130_)*tmp77_+tmp114_*tmp78_*(tmp79_)+(tmp125_+tmp127_)*tmp80_;
  mCompDer[0][18] = tmp155_+(tmp167_*(tmp48_)+tmp155_*(tmp59_))*tmp63_+(tmp169_)*tmp65_+((tmp169_)*(tmp48_)+tmp155_*tmp60_)*tmp67_+(tmp167_*tmp61_+(tmp171_)*(tmp59_))*tmp69_+(tmp174_)*tmp71_+((tmp155_*mLocDCBrown_State_0_0)/tmp84_)*tmp72_*tmp62_+(tmp174_)*tmp77_+tmp155_*tmp78_*(tmp79_)+(tmp169_+tmp171_)*tmp80_;
  mCompDer[0][19] = tmp205_+(tmp209_*(tmp48_)+tmp205_*(tmp59_))*tmp63_+(tmp211_)*tmp65_+((tmp211_)*(tmp48_)+tmp205_*tmp60_)*tmp67_+(tmp209_*tmp61_+(tmp213_)*(tmp59_))*tmp69_+(tmp216_)*tmp71_+((tmp205_*mLocDCBrown_State_0_0)/tmp84_)*tmp72_*tmp62_+(tmp216_)*tmp77_+tmp205_*tmp78_*(tmp79_)+(tmp211_+tmp213_)*tmp80_;
  mCompDer[0][20] = tmp223_+(tmp229_*(tmp48_)+tmp223_*(tmp59_))*tmp63_+(tmp231_)*tmp65_+((tmp231_)*(tmp48_)+tmp223_*tmp60_)*tmp67_+(tmp229_*tmp61_+(tmp233_)*(tmp59_))*tmp69_+(tmp236_)*tmp71_+((tmp223_*mLocDCBrown_State_0_0)/tmp84_)*tmp72_*tmp62_+(tmp236_)*tmp77_+tmp223_*tmp78_*(tmp79_)+(tmp231_+tmp233_)*tmp80_;
  mCompDer[0][21] = tmp243_+(tmp249_*(tmp48_)+tmp243_*(tmp59_))*tmp63_+(tmp251_)*tmp65_+((tmp251_)*(tmp48_)+tmp243_*tmp60_)*tmp67_+(tmp249_*tmp61_+(tmp253_)*(tmp59_))*tmp69_+(tmp256_)*tmp71_+((tmp243_*mLocDCBrown_State_0_0)/tmp84_)*tmp72_*tmp62_+(tmp256_)*tmp77_+tmp243_*tmp78_*(tmp79_)+(tmp251_+tmp253_)*tmp80_;
  mCompDer[0][22] = tmp263_+(tmp268_*(tmp48_)+tmp263_*(tmp59_))*tmp63_+(tmp270_)*tmp65_+((tmp270_)*(tmp48_)+tmp263_*tmp60_)*tmp67_+(tmp268_*tmp61_+(tmp272_)*(tmp59_))*tmp69_+(tmp275_)*tmp71_+((tmp263_*mLocDCBrown_State_0_0)/tmp84_)*tmp72_*tmp62_+(tmp275_)*tmp77_+tmp263_*tmp78_*(tmp79_)+(tmp270_+tmp272_)*tmp80_;
}


void cEqAppui_Y_M2CDCBrown::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_Y_M2CDCBrown Has no Der Sec");
}

void cEqAppui_Y_M2CDCBrown::SetDCBrown_State_0_0(double aVal){ mLocDCBrown_State_0_0 = aVal;}
void cEqAppui_Y_M2CDCBrown::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_Y_M2CDCBrown::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppui_Y_M2CDCBrown::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_Y_M2CDCBrown::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_Y_M2CDCBrown::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "DCBrown_State_0_0") return & mLocDCBrown_State_0_0;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_Y_M2CDCBrown::mTheAuto("cEqAppui_Y_M2CDCBrown",cEqAppui_Y_M2CDCBrown::Alloc);


cElCompiledFonc *  cEqAppui_Y_M2CDCBrown::Alloc()
{  return new cEqAppui_Y_M2CDCBrown();
}


