// -*- C++ -*-
//
// FRModel.cc is a part of Herwig - A multi-purpose Monte Carlo event generator
// Copyright (C) 2002-2007 The Herwig Collaboration
//
// Herwig is licenced under version 2 of the GPL, see COPYING for details.
// Please respect the MCnet academic guidelines, see GUIDELINES for details.
//
//
// This is the implementation of the non-inlined, non-templated member
// functions of the FRModel class.
//

#include "FRModel.h"
#include "ThePEG/Interface/ClassDocumentation.h"
#include "ThePEG/Interface/Reference.h"
#include "ThePEG/Interface/Parameter.h"
#include "ThePEG/Persistency/PersistentOStream.h"
#include "ThePEG/Persistency/PersistentIStream.h"
#include "ThePEG/Helicity/Vertex/VertexBase.h"
#include "ThePEG/Utilities/DescribeClass.h"
#include <fstream>

//#include "Herwig/Models/General/ModelGenerator.h"

using namespace ThePEG;
using namespace Herwig;

FRModel::FRModel()
: ZERO_(),
MU_R_(91.188),l2_(0.5),l3_(1),lR7_(0.1),aEWM1_(127.9),
Gf_(1.16639e-05),aS_(0.118),ymb_(4.7),ymt_(172),ymtau_(1.777),
tanbeta_(1.53748),sinbma_(0.1),MZ_(),MT_(),MB_(),
mhc_(),mh1_(),mh2_(),mh3_(),WZ_(),
WW_(),WT_(),whc_(),Wh1_(),Wh2_(),
Wh3_(),TH1x1_(),TH1x2_(),TH2x1_(),TH2x2_(),
TH3x3_(),aEW_(),G_(),l7_(0.0,0.0),lI5_(),
lI6_(),MW_(),ee_(),sw2_(),cw_(),
sw_(),g1_(),gw_(),vev_(),mu2_(),
l1_(),l4_(),lR5_(),lR6_(),yb_(),
yt_(),ytau_(),mu1_(),l5_(0.0,0.0),l6_(0.0,0.0),
mu3_(0.0,0.0),I1a33_(0.0,0.0),I2a33_(0.0,0.0),I3a33_(0.0,0.0),I4a33_(0.0,0.0),
I5a33_(0.0,0.0),I6a33_(0.0,0.0),I7a33_(0.0,0.0),I8a33_(0.0,0.0)
{}

IBPtr FRModel::clone() const {
  return new_ptr(*this);
}

IBPtr FRModel::fullclone() const {
  return new_ptr(*this);
}

void FRModel::doinit() {
     ZERO_ = 0.0;
   if(std::isnan(ZERO_) || std::isinf(ZERO_)) {throw InitException() << "Calculated parameter ZERO is nan or inf in Feynrules model. Check your input parameters.";}
   MZ_ = getParticleData(23)->mass()  / GeV;
   MT_ = getParticleData(6)->mass()  / GeV;
   MB_ = getParticleData(5)->mass()  / GeV;
   mhc_ = getParticleData(37)->mass()  / GeV;
   mh1_ = getParticleData(25)->mass()  / GeV;
   mh2_ = getParticleData(35)->mass()  / GeV;
   mh3_ = getParticleData(36)->mass()  / GeV;
   WZ_ = getParticleData(23)->width() / GeV;
   WW_ = getParticleData(24)->width() / GeV;
   WT_ = getParticleData(6)->width() / GeV;
   whc_ = getParticleData(37)->width() / GeV;
   Wh1_ = getParticleData(25)->width() / GeV;
   Wh2_ = getParticleData(35)->width() / GeV;
   Wh3_ = getParticleData(36)->width() / GeV;
   TH1x1_ = sinbma();
   if(std::isnan(TH1x1_) || std::isinf(TH1x1_)) {throw InitException() << "Calculated parameter TH1x1 is nan or inf in Feynrules model. Check your input parameters.";}
   TH1x2_ = sqrt((1.0-sqr(sinbma())));
   if(std::isnan(TH1x2_) || std::isinf(TH1x2_)) {throw InitException() << "Calculated parameter TH1x2 is nan or inf in Feynrules model. Check your input parameters.";}
   TH2x1_ = (-sqrt((1.0-sqr(sinbma()))));
   if(std::isnan(TH2x1_) || std::isinf(TH2x1_)) {throw InitException() << "Calculated parameter TH2x1 is nan or inf in Feynrules model. Check your input parameters.";}
   TH2x2_ = sinbma();
   if(std::isnan(TH2x2_) || std::isinf(TH2x2_)) {throw InitException() << "Calculated parameter TH2x2 is nan or inf in Feynrules model. Check your input parameters.";}
   TH3x3_ = 1.0;
   if(std::isnan(TH3x3_) || std::isinf(TH3x3_)) {throw InitException() << "Calculated parameter TH3x3 is nan or inf in Feynrules model. Check your input parameters.";}
   aEW_ = (1.0/aEWM1());
   if(std::isnan(aEW_) || std::isinf(aEW_)) {throw InitException() << "Calculated parameter aEW is nan or inf in Feynrules model. Check your input parameters.";}
   G_ = ((2.0*sqrt(aS()))*sqrt(pi));
   if(std::isnan(G_) || std::isinf(G_)) {throw InitException() << "Calculated parameter G is nan or inf in Feynrules model. Check your input parameters.";}
   l7_ = lR7();
   if(std::isnan(l7_.real()) || std::isnan(l7_.imag()) || std::isinf(l7_.real()) || std::isinf(l7_.imag())) {throw InitException() << "Calculated parameter l7 is nan or inf in Feynrules model. Check your input parameters.";}
   lI5_ = 0.0;
   if(std::isnan(lI5_) || std::isinf(lI5_)) {throw InitException() << "Calculated parameter lI5 is nan or inf in Feynrules model. Check your input parameters.";}
   lI6_ = 0.0;
   if(std::isnan(lI6_) || std::isinf(lI6_)) {throw InitException() << "Calculated parameter lI6 is nan or inf in Feynrules model. Check your input parameters.";}
   MW_ = sqrt(((sqr(MZ())/2.0)+sqrt(((pow(MZ(),4.0)/4.0)-(((aEW()*pi)*sqr(MZ()))/(Gf()*sqrt(2.0)))))));
   if(std::isnan(MW_) || std::isinf(MW_)) {throw InitException() << "Calculated parameter MW is nan or inf in Feynrules model. Check your input parameters.";}
   resetMass(24,MW_ * GeV);
   ee_ = ((2.0*sqrt(aEW()))*sqrt(pi));
   if(std::isnan(ee_) || std::isinf(ee_)) {throw InitException() << "Calculated parameter ee is nan or inf in Feynrules model. Check your input parameters.";}
   sw2_ = (1.0-(sqr(MW())/sqr(MZ())));
   if(std::isnan(sw2_) || std::isinf(sw2_)) {throw InitException() << "Calculated parameter sw2 is nan or inf in Feynrules model. Check your input parameters.";}
   cw_ = sqrt((1.0-sw2()));
   if(std::isnan(cw_) || std::isinf(cw_)) {throw InitException() << "Calculated parameter cw is nan or inf in Feynrules model. Check your input parameters.";}
   sw_ = sqrt(sw2());
   if(std::isnan(sw_) || std::isinf(sw_)) {throw InitException() << "Calculated parameter sw is nan or inf in Feynrules model. Check your input parameters.";}
   g1_ = (ee()/cw());
   if(std::isnan(g1_) || std::isinf(g1_)) {throw InitException() << "Calculated parameter g1 is nan or inf in Feynrules model. Check your input parameters.";}
   gw_ = (ee()/sw());
   if(std::isnan(gw_) || std::isinf(gw_)) {throw InitException() << "Calculated parameter gw is nan or inf in Feynrules model. Check your input parameters.";}
   vev_ = (((2.0*MW())*sw())/ee());
   if(std::isnan(vev_) || std::isinf(vev_)) {throw InitException() << "Calculated parameter vev is nan or inf in Feynrules model. Check your input parameters.";}
   mu2_ = (sqr(mhc())-((l3()*sqr(vev()))/2.0));
   if(std::isnan(mu2_) || std::isinf(mu2_)) {throw InitException() << "Calculated parameter mu2 is nan or inf in Feynrules model. Check your input parameters.";}
   l1_ = ((-((-(sqr(mh1())*sqr(sinbma())))-(sqr(mh2())*(1.0-sqr(sinbma())))))/(2.0*sqr(vev())));
   if(std::isnan(l1_) || std::isinf(l1_)) {throw InitException() << "Calculated parameter l1 is nan or inf in Feynrules model. Check your input parameters.";}
   l4_ = ((((((2.0*sqr(mh1()))+(2.0*sqr(mh2())))+(4.0*sqr(mh3())))-(8.0*sqr(mhc())))+((2.0*((-sqr(mh1()))+sqr(mh2())))*cos((2.0*((pi/2.0)-asin(sinbma()))))))/(4.0*sqr(vev())));
   if(std::isnan(l4_) || std::isinf(l4_)) {throw InitException() << "Calculated parameter l4 is nan or inf in Feynrules model. Check your input parameters.";}
   lR5_ = (((2.0*((sqr(mh1())+sqr(mh2()))-(2.0*sqr(mh3()))))-(((2.0*(mh1()-mh2()))*(mh1()+mh2()))*cos((2.0*((pi/2.0)-asin(sinbma()))))))/(8.0*sqr(vev())));
   if(std::isnan(lR5_) || std::isinf(lR5_)) {throw InitException() << "Calculated parameter lR5 is nan or inf in Feynrules model. Check your input parameters.";}
   lR6_ = (((((-sqr(mh1()))+sqr(mh2()))*sinbma())*sqrt((1.0-sqr(sinbma()))))/sqr(vev()));
   if(std::isnan(lR6_) || std::isinf(lR6_)) {throw InitException() << "Calculated parameter lR6 is nan or inf in Feynrules model. Check your input parameters.";}
   yb_ = ((ymb()*sqrt(2.0))/vev());
   if(std::isnan(yb_) || std::isinf(yb_)) {throw InitException() << "Calculated parameter yb is nan or inf in Feynrules model. Check your input parameters.";}
   yt_ = ((ymt()*sqrt(2.0))/vev());
   if(std::isnan(yt_) || std::isinf(yt_)) {throw InitException() << "Calculated parameter yt is nan or inf in Feynrules model. Check your input parameters.";}
   ytau_ = ((ymtau()*sqrt(2.0))/vev());
   if(std::isnan(ytau_) || std::isinf(ytau_)) {throw InitException() << "Calculated parameter ytau is nan or inf in Feynrules model. Check your input parameters.";}
   mu1_ = (-(l1()*sqr(vev())));
   if(std::isnan(mu1_) || std::isinf(mu1_)) {throw InitException() << "Calculated parameter mu1 is nan or inf in Feynrules model. Check your input parameters.";}
   l5_ = ((ii*lI5())+lR5());
   if(std::isnan(l5_.real()) || std::isnan(l5_.imag()) || std::isinf(l5_.real()) || std::isinf(l5_.imag())) {throw InitException() << "Calculated parameter l5 is nan or inf in Feynrules model. Check your input parameters.";}
   l6_ = ((ii*lI6())+lR6());
   if(std::isnan(l6_.real()) || std::isnan(l6_.imag()) || std::isinf(l6_.real()) || std::isinf(l6_.imag())) {throw InitException() << "Calculated parameter l6 is nan or inf in Feynrules model. Check your input parameters.";}
   mu3_ = ((-(l6()*sqr(vev())))/2.0);
   if(std::isnan(mu3_.real()) || std::isnan(mu3_.imag()) || std::isinf(mu3_.real()) || std::isinf(mu3_.imag())) {throw InitException() << "Calculated parameter mu3 is nan or inf in Feynrules model. Check your input parameters.";}
   I1a33_ = (((tanbeta()*ymb())*sqrt(2.0))/vev());
   if(std::isnan(I1a33_.real()) || std::isnan(I1a33_.imag()) || std::isinf(I1a33_.real()) || std::isinf(I1a33_.imag())) {throw InitException() << "Calculated parameter I1a33 is nan or inf in Feynrules model. Check your input parameters.";}
   I2a33_ = (-((ymt()*sqrt(2.0))/(tanbeta()*vev())));
   if(std::isnan(I2a33_.real()) || std::isnan(I2a33_.imag()) || std::isinf(I2a33_.real()) || std::isinf(I2a33_.imag())) {throw InitException() << "Calculated parameter I2a33 is nan or inf in Feynrules model. Check your input parameters.";}
   I3a33_ = (-((ymt()*sqrt(2.0))/(tanbeta()*vev())));
   if(std::isnan(I3a33_.real()) || std::isnan(I3a33_.imag()) || std::isinf(I3a33_.real()) || std::isinf(I3a33_.imag())) {throw InitException() << "Calculated parameter I3a33 is nan or inf in Feynrules model. Check your input parameters.";}
   I4a33_ = (((tanbeta()*ymb())*sqrt(2.0))/vev());
   if(std::isnan(I4a33_.real()) || std::isnan(I4a33_.imag()) || std::isinf(I4a33_.real()) || std::isinf(I4a33_.imag())) {throw InitException() << "Calculated parameter I4a33 is nan or inf in Feynrules model. Check your input parameters.";}
   I5a33_ = yb();
   if(std::isnan(I5a33_.real()) || std::isnan(I5a33_.imag()) || std::isinf(I5a33_.real()) || std::isinf(I5a33_.imag())) {throw InitException() << "Calculated parameter I5a33 is nan or inf in Feynrules model. Check your input parameters.";}
   I6a33_ = yt();
   if(std::isnan(I6a33_.real()) || std::isnan(I6a33_.imag()) || std::isinf(I6a33_.real()) || std::isinf(I6a33_.imag())) {throw InitException() << "Calculated parameter I6a33 is nan or inf in Feynrules model. Check your input parameters.";}
   I7a33_ = yt();
   if(std::isnan(I7a33_.real()) || std::isnan(I7a33_.imag()) || std::isinf(I7a33_.real()) || std::isinf(I7a33_.imag())) {throw InitException() << "Calculated parameter I7a33 is nan or inf in Feynrules model. Check your input parameters.";}
   I8a33_ = yb();
   if(std::isnan(I8a33_.real()) || std::isnan(I8a33_.imag()) || std::isinf(I8a33_.real()) || std::isinf(I8a33_.imag())) {throw InitException() << "Calculated parameter I8a33 is nan or inf in Feynrules model. Check your input parameters.";}
  BSMModel::doinit();
  
  writeParamCard();
  setCouplings("QED",make_pair(1,99));
  setCouplings("QCD",make_pair(2,99));

}

void FRModel::doinitrun() {
  BSMModel::doinitrun();
  writeParamCard();
}

void FRModel::persistentOutput(PersistentOStream & os) const {
  os << ZERO_
<< MU_R_<< l2_<< l3_<< lR7_<< aEWM1_
<< Gf_<< aS_<< ymb_<< ymt_<< ymtau_
<< tanbeta_<< sinbma_<< MZ_<< MT_<< MB_
<< mhc_<< mh1_<< mh2_<< mh3_<< WZ_
<< WW_<< WT_<< whc_<< Wh1_<< Wh2_
<< Wh3_<< TH1x1_<< TH1x2_<< TH2x1_<< TH2x2_
<< TH3x3_<< aEW_<< G_<< l7_<< lI5_
<< lI6_<< MW_<< ee_<< sw2_<< cw_
<< sw_<< g1_<< gw_<< vev_<< mu2_
<< l1_<< l4_<< lR5_<< lR6_<< yb_
<< yt_<< ytau_<< mu1_<< l5_<< l6_
<< mu3_<< I1a33_<< I2a33_<< I3a33_<< I4a33_
<< I5a33_<< I6a33_<< I7a33_<< I8a33_ ;
}

void FRModel::persistentInput(PersistentIStream & is, int) {
  is >> ZERO_
>> MU_R_>> l2_>> l3_>> lR7_>> aEWM1_
>> Gf_>> aS_>> ymb_>> ymt_>> ymtau_
>> tanbeta_>> sinbma_>> MZ_>> MT_>> MB_
>> mhc_>> mh1_>> mh2_>> mh3_>> WZ_
>> WW_>> WT_>> whc_>> Wh1_>> Wh2_
>> Wh3_>> TH1x1_>> TH1x2_>> TH2x1_>> TH2x2_
>> TH3x3_>> aEW_>> G_>> l7_>> lI5_
>> lI6_>> MW_>> ee_>> sw2_>> cw_
>> sw_>> g1_>> gw_>> vev_>> mu2_
>> l1_>> l4_>> lR5_>> lR6_>> yb_
>> yt_>> ytau_>> mu1_>> l5_>> l6_
>> mu3_>> I1a33_>> I2a33_>> I3a33_>> I4a33_
>> I5a33_>> I6a33_>> I7a33_>> I8a33_ ;
}

void FRModel::writeParamCard() const {
  ofstream card("param_card.dat");

  card 
    << "#####################################################\n"
    << "## DO NOT EDIT - GENERATED BY HERWIG UFO CONVERTER ##\n"
    << "#####################################################\n\n";

  card 
    << "Block YUKAWA\n"
<< "    5 " << ymb() << " # ymb\n"
<< "    6 " << ymt() << " # ymt\n"
<< "   15 " << ymtau() << " # ymtau\n"
<< "Block Higgs\n"
<< "    1 " << l2() << " # l2\n"
<< "    2 " << l3() << " # l3\n"
<< "    3 " << lR7() << " # lR7\n"
<< "DECAY  23 " << WZ() << "\n"
<< "DECAY  24 " << WW() << "\n"
<< "DECAY   6 " << WT() << "\n"
<< "DECAY  37 " << whc() << "\n"
<< "DECAY  25 " << Wh1() << "\n"
<< "DECAY  35 " << Wh2() << "\n"
<< "DECAY  36 " << Wh3() << "\n"
<< "Block MASS\n"
<< "   23 " << MZ() << " # MZ\n"
<< "    6 " << MT() << " # MT\n"
<< "    5 " << MB() << " # MB\n"
<< "   37 " << mhc() << " # mhc\n"
<< "   25 " << mh1() << " # mh1\n"
<< "   35 " << mh2() << " # mh2\n"
<< "   36 " << mh3() << " # mh3\n"
<< "Block SMINPUTS\n"
<< "    1 " << aEWM1() << " # aEWM1\n"
<< "    2 " << Gf() << " # Gf\n"
<< "    3 " << aS() << " # aS\n"
<< "Block FRBlock\n"
<< "    1 " << tanbeta() << " # tanbeta\n"
<< "    2 " << sinbma() << " # sinbma\n"
<< "Block LOOP\n"
<< "    1 " << MU_R() << " # MU_R\n"
    << '\n';

  card.close();
}

// Static variable needed for the type description system in ThePEG.
DescribeClass<FRModel,BSMModel>
  describeThePEGFRModel("Herwig::FRModel", "FRModel.so");

void FRModel::Init() {
  


static ClassDocumentation<FRModel> documentation
  ("The FRModel class inherits from BSMModel"
   "and supplies additional couplings and access to the FRModel"
   "vertices for helicity amplitude calculations" );

 static Parameter<FRModel, double> interfaceMU_R
  ("MU_R",
   "The interface for parameter MU_R",
   &FRModel::MU_R_, 91.188, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfacel2
  ("l2",
   "The interface for parameter l2",
   &FRModel::l2_, 0.5, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfacel3
  ("l3",
   "The interface for parameter l3",
   &FRModel::l3_, 1, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfacelR7
  ("lR7",
   "The interface for parameter lR7",
   &FRModel::lR7_, 0.1, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfaceaEWM1
  ("aEWM1",
   "The interface for parameter aEWM1",
   &FRModel::aEWM1_, 127.9, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfaceGf
  ("Gf",
   "The interface for parameter Gf",
   &FRModel::Gf_, 1.16639e-05, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfaceaS
  ("aS",
   "The interface for parameter aS",
   &FRModel::aS_, 0.118, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfaceymb
  ("ymb",
   "The interface for parameter ymb",
   &FRModel::ymb_, 4.7, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfaceymt
  ("ymt",
   "The interface for parameter ymt",
   &FRModel::ymt_, 172, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfaceymtau
  ("ymtau",
   "The interface for parameter ymtau",
   &FRModel::ymtau_, 1.777, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfacetanbeta
  ("tanbeta",
   "The interface for parameter tanbeta",
   &FRModel::tanbeta_, 1.53748, 0, 0,
   false, false, Interface::nolimits);
static Parameter<FRModel, double> interfacesinbma
  ("sinbma",
   "The interface for parameter sinbma",
   &FRModel::sinbma_, 0.1, 0, 0,
   false, false, Interface::nolimits);

// no interface for MZ. Use particle definition instead.

// no interface for MT. Use particle definition instead.

// no interface for MB. Use particle definition instead.

// no interface for mhc. Use particle definition instead.

// no interface for mh1. Use particle definition instead.

// no interface for mh2. Use particle definition instead.

// no interface for mh3. Use particle definition instead.

// no interface for WZ. Use particle definition instead.

// no interface for WW. Use particle definition instead.

// no interface for WT. Use particle definition instead.

// no interface for whc. Use particle definition instead.

// no interface for Wh1. Use particle definition instead.

// no interface for Wh2. Use particle definition instead.

// no interface for Wh3. Use particle definition instead.


}


