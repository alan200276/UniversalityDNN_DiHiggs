// -*- C++ -*-
//
// FRModel_Vertices_004.cc is a part of Herwig - A multi-purpose Monte Carlo event generator
// Copyright (C) 2002-2007 The Herwig Collaboration
//
// Herwig is licenced under version 2 of the GPL, see COPYING for details.
// Please respect the MCnet academic guidelines, see GUIDELINES for details.

#include "FRModel.h"
#include "ThePEG/Helicity/Vertex/Vector/VVVVVertex.h"
#include "ThePEG/Helicity/Vertex/Vector/FFVVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/VVSVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/VVSSVertex.h"

#include "ThePEG/Utilities/DescribeClass.h"
#include "ThePEG/Persistency/PersistentOStream.h"
#include "ThePEG/Persistency/PersistentIStream.h"

namespace Herwig 
{
  using namespace ThePEG;
  using namespace ThePEG::Helicity;
  using ThePEG::Constants::pi;

  class FRModelV_V_202: public VVSVertex {
 public:
  FRModelV_V_202() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,23,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double vev = model_->vev();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x2 = model_->TH1x2();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(Complex((((((-ii)*1.0)*(((((-(((((sqr(cw)*ii)*g1)*gw)*TH1x2)*vev))/2.0)-((((((cw*ii)*sqr(g1))*sw)*TH1x2)*vev)/2.0))+((((((cw*ii)*sqr(gw))*sw)*TH1x2)*vev)/2.0))+((((((ii*g1)*gw)*sqr(sw))*TH1x2)*vev)/2.0)))*1.0)) * GeV / UnitRemoval::E));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,1);
    orderInCoupling(CouplingType::QCD,0);

    VVSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_202 & operator=(const FRModelV_V_202 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_202,Helicity::VVSVertex>
describeHerwigFRModelV_V_202("Herwig::FRModelV_V_202",
				       "FRModel.so");
// void FRModelV_V_202::getParams(Energy2 ) {
// }

class FRModelV_V_203: public VVSSVertex {
 public:
  FRModelV_V_203() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,23,25,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x1 = model_->TH1x1();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((((((-((((sqr(cw)*ii)*g1)*gw)*sqr(TH1x1)))/2.0)-(((((cw*ii)*sqr(g1))*sw)*sqr(TH1x1))/2.0))+(((((cw*ii)*sqr(gw))*sw)*sqr(TH1x1))/2.0))+(((((ii*g1)*gw)*sqr(sw))*sqr(TH1x1))/2.0))-(((((sqr(cw)*ii)*g1)*gw)*sqr(TH2x1))/2.0))-(((((cw*ii)*sqr(g1))*sw)*sqr(TH2x1))/2.0))+(((((cw*ii)*sqr(gw))*sw)*sqr(TH2x1))/2.0))+(((((ii*g1)*gw)*sqr(sw))*sqr(TH2x1))/2.0)))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_203 & operator=(const FRModelV_V_203 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_203,Helicity::VVSSVertex>
describeHerwigFRModelV_V_203("Herwig::FRModelV_V_203",
				       "FRModel.so");
// void FRModelV_V_203::getParams(Energy2 ) {
// }

class FRModelV_V_204: public VVSSVertex {
 public:
  FRModelV_V_204() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,23,25,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double TH2x1 = model_->TH2x1();
    double g1 = model_->g1();
    double TH1x1 = model_->TH1x1();
    double TH1x2 = model_->TH1x2();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((((((-(((((sqr(cw)*ii)*g1)*gw)*TH1x1)*TH1x2))/2.0)-((((((cw*ii)*sqr(g1))*sw)*TH1x1)*TH1x2)/2.0))+((((((cw*ii)*sqr(gw))*sw)*TH1x1)*TH1x2)/2.0))+((((((ii*g1)*gw)*sqr(sw))*TH1x1)*TH1x2)/2.0))-((((((sqr(cw)*ii)*g1)*gw)*TH2x1)*TH2x2)/2.0))-((((((cw*ii)*sqr(g1))*sw)*TH2x1)*TH2x2)/2.0))+((((((cw*ii)*sqr(gw))*sw)*TH2x1)*TH2x2)/2.0))+((((((ii*g1)*gw)*sqr(sw))*TH2x1)*TH2x2)/2.0)))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_204 & operator=(const FRModelV_V_204 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_204,Helicity::VVSSVertex>
describeHerwigFRModelV_V_204("Herwig::FRModelV_V_204",
				       "FRModel.so");
// void FRModelV_V_204::getParams(Energy2 ) {
// }

class FRModelV_V_205: public VVSSVertex {
 public:
  FRModelV_V_205() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,23,35,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x2 = model_->TH1x2();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((((((-((((sqr(cw)*ii)*g1)*gw)*sqr(TH1x2)))/2.0)-(((((cw*ii)*sqr(g1))*sw)*sqr(TH1x2))/2.0))+(((((cw*ii)*sqr(gw))*sw)*sqr(TH1x2))/2.0))+(((((ii*g1)*gw)*sqr(sw))*sqr(TH1x2))/2.0))-(((((sqr(cw)*ii)*g1)*gw)*sqr(TH2x2))/2.0))-(((((cw*ii)*sqr(g1))*sw)*sqr(TH2x2))/2.0))+(((((cw*ii)*sqr(gw))*sw)*sqr(TH2x2))/2.0))+(((((ii*g1)*gw)*sqr(sw))*sqr(TH2x2))/2.0)))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_205 & operator=(const FRModelV_V_205 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_205,Helicity::VVSSVertex>
describeHerwigFRModelV_V_205("Herwig::FRModelV_V_205",
				       "FRModel.so");
// void FRModelV_V_205::getParams(Energy2 ) {
// }

class FRModelV_V_206: public VVSSVertex {
 public:
  FRModelV_V_206() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,23,36,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH3x3 = model_->TH3x3();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((-((((sqr(cw)*ii)*g1)*gw)*sqr(TH3x3)))/2.0)-(((((cw*ii)*sqr(g1))*sw)*sqr(TH3x3))/2.0))+(((((cw*ii)*sqr(gw))*sw)*sqr(TH3x3))/2.0))+(((((ii*g1)*gw)*sqr(sw))*sqr(TH3x3))/2.0)))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_206 & operator=(const FRModelV_V_206 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_206,Helicity::VVSSVertex>
describeHerwigFRModelV_V_206("Herwig::FRModelV_V_206",
				       "FRModel.so");
// void FRModelV_V_206::getParams(Energy2 ) {
// }

class FRModelV_V_211: public VVSSVertex {
 public:
  FRModelV_V_211() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,23,25,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((-((((ii*g1)*gw)*sw)*TH2x1))/2.0))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_211 & operator=(const FRModelV_V_211 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_211,Helicity::VVSSVertex>
describeHerwigFRModelV_V_211("Herwig::FRModelV_V_211",
				       "FRModel.so");
// void FRModelV_V_211::getParams(Energy2 ) {
// }

class FRModelV_V_212: public VVSSVertex {
 public:
  FRModelV_V_212() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,23,35,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((-((((ii*g1)*gw)*sw)*TH2x2))/2.0))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_212 & operator=(const FRModelV_V_212 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_212,Helicity::VVSSVertex>
describeHerwigFRModelV_V_212("Herwig::FRModelV_V_212",
				       "FRModel.so");
// void FRModelV_V_212::getParams(Energy2 ) {
// }

class FRModelV_V_213: public VVSSVertex {
 public:
  FRModelV_V_213() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,23,36,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH3x3 = model_->TH3x3();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((((g1*gw)*sw)*TH3x3)/2.0))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_213 & operator=(const FRModelV_V_213 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_213,Helicity::VVSSVertex>
describeHerwigFRModelV_V_213("Herwig::FRModelV_V_213",
				       "FRModel.so");
// void FRModelV_V_213::getParams(Energy2 ) {
// }

class FRModelV_V_218: public VVSSVertex {
 public:
  FRModelV_V_218() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(24,23,25,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((-((((ii*g1)*gw)*sw)*TH2x1))/2.0))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_218 & operator=(const FRModelV_V_218 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_218,Helicity::VVSSVertex>
describeHerwigFRModelV_V_218("Herwig::FRModelV_V_218",
				       "FRModel.so");
// void FRModelV_V_218::getParams(Energy2 ) {
// }

class FRModelV_V_219: public VVSSVertex {
 public:
  FRModelV_V_219() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(24,23,35,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((-((((ii*g1)*gw)*sw)*TH2x2))/2.0))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_219 & operator=(const FRModelV_V_219 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_219,Helicity::VVSSVertex>
describeHerwigFRModelV_V_219("Herwig::FRModelV_V_219",
				       "FRModel.so");
// void FRModelV_V_219::getParams(Energy2 ) {
// }

class FRModelV_V_220: public VVSSVertex {
 public:
  FRModelV_V_220() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(24,23,36,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH3x3 = model_->TH3x3();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((-(((g1*gw)*sw)*TH3x3))/2.0))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_220 & operator=(const FRModelV_V_220 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_220,Helicity::VVSSVertex>
describeHerwigFRModelV_V_220("Herwig::FRModelV_V_220",
				       "FRModel.so");
// void FRModelV_V_220::getParams(Energy2 ) {
// }

class FRModelV_V_221: public VVVVVertex {
 public:
  FRModelV_V_221() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,-24,24,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr p2,tcPDPtr p3,tcPDPtr p4) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm((0.5*((ii*1.0)*((((-2.0*cw)*ii)*sqr(gw))*sw))));
    
    
    bool done[4]={false,false,false,false};
    tcPDPtr part[4]={p1,p2,p3,p4};
    unsigned int iorder[4]={0,0,0,0};
    for(unsigned int ix=0;ix<4;++ix) {
       if(!done[0] && part[ix]->id()==22) {done[0]=true; iorder[0] = ix; continue;}
       if(!done[1] && part[ix]->id()==-24) {done[1]=true; iorder[3] = ix; continue;}
       if(!done[2] && part[ix]->id()==24) {done[2]=true; iorder[1] = ix; continue;}
       if(!done[3] && part[ix]->id()==23) {done[3]=true; iorder[2] = ix; continue;}
    }
    setType(2);
    setOrder(iorder[0],iorder[1],iorder[2],iorder[3]);
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVVVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_221 & operator=(const FRModelV_V_221 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_221,Helicity::VVVVVertex>
describeHerwigFRModelV_V_221("Herwig::FRModelV_V_221",
				       "FRModel.so");
// void FRModelV_V_221::getParams(Energy2 ) {
// }

class FRModelV_V_224: public VVSSVertex {
 public:
  FRModelV_V_224() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(23,23,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((sqr(cw)*ii)*sqr(gw))/2.0)-((((cw*ii)*g1)*gw)*sw))+(((ii*sqr(g1))*sqr(sw))/2.0)))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_224 & operator=(const FRModelV_V_224 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_224,Helicity::VVSSVertex>
describeHerwigFRModelV_V_224("Herwig::FRModelV_V_224",
				       "FRModel.so");
// void FRModelV_V_224::getParams(Energy2 ) {
// }

class FRModelV_V_225: public VVSVertex {
 public:
  FRModelV_V_225() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(23,23,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double vev = model_->vev();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x1 = model_->TH1x1();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(Complex((((((-ii)*1.0)*(((((((sqr(cw)*ii)*sqr(gw))*TH1x1)*vev)/2.0)+((((((cw*ii)*g1)*gw)*sw)*TH1x1)*vev))+(((((ii*sqr(g1))*sqr(sw))*TH1x1)*vev)/2.0)))*1.0)) * GeV / UnitRemoval::E));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,1);
    orderInCoupling(CouplingType::QCD,0);

    VVSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_225 & operator=(const FRModelV_V_225 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_225,Helicity::VVSVertex>
describeHerwigFRModelV_V_225("Herwig::FRModelV_V_225",
				       "FRModel.so");
// void FRModelV_V_225::getParams(Energy2 ) {
// }

class FRModelV_V_226: public VVSVertex {
 public:
  FRModelV_V_226() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(23,23,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double vev = model_->vev();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x2 = model_->TH1x2();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(Complex((((((-ii)*1.0)*(((((((sqr(cw)*ii)*sqr(gw))*TH1x2)*vev)/2.0)+((((((cw*ii)*g1)*gw)*sw)*TH1x2)*vev))+(((((ii*sqr(g1))*sqr(sw))*TH1x2)*vev)/2.0)))*1.0)) * GeV / UnitRemoval::E));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,1);
    orderInCoupling(CouplingType::QCD,0);

    VVSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_226 & operator=(const FRModelV_V_226 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_226,Helicity::VVSVertex>
describeHerwigFRModelV_V_226("Herwig::FRModelV_V_226",
				       "FRModel.so");
// void FRModelV_V_226::getParams(Energy2 ) {
// }

class FRModelV_V_227: public VVSSVertex {
 public:
  FRModelV_V_227() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(23,23,25,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x1 = model_->TH1x1();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((((((sqr(cw)*ii)*sqr(gw))*sqr(TH1x1))/2.0)+(((((cw*ii)*g1)*gw)*sw)*sqr(TH1x1)))+((((ii*sqr(g1))*sqr(sw))*sqr(TH1x1))/2.0))+((((sqr(cw)*ii)*sqr(gw))*sqr(TH2x1))/2.0))+(((((cw*ii)*g1)*gw)*sw)*sqr(TH2x1)))+((((ii*sqr(g1))*sqr(sw))*sqr(TH2x1))/2.0)))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_227 & operator=(const FRModelV_V_227 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_227,Helicity::VVSSVertex>
describeHerwigFRModelV_V_227("Herwig::FRModelV_V_227",
				       "FRModel.so");
// void FRModelV_V_227::getParams(Energy2 ) {
// }

class FRModelV_V_228: public VVSSVertex {
 public:
  FRModelV_V_228() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(23,23,25,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double TH2x1 = model_->TH2x1();
    double g1 = model_->g1();
    double TH1x1 = model_->TH1x1();
    double TH1x2 = model_->TH1x2();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((((((((((sqr(cw)*ii)*sqr(gw))*TH1x1)*TH1x2)/2.0)+((((((cw*ii)*g1)*gw)*sw)*TH1x1)*TH1x2))+(((((ii*sqr(g1))*sqr(sw))*TH1x1)*TH1x2)/2.0))+(((((sqr(cw)*ii)*sqr(gw))*TH2x1)*TH2x2)/2.0))+((((((cw*ii)*g1)*gw)*sw)*TH2x1)*TH2x2))+(((((ii*sqr(g1))*sqr(sw))*TH2x1)*TH2x2)/2.0)))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_228 & operator=(const FRModelV_V_228 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_228,Helicity::VVSSVertex>
describeHerwigFRModelV_V_228("Herwig::FRModelV_V_228",
				       "FRModel.so");
// void FRModelV_V_228::getParams(Energy2 ) {
// }

class FRModelV_V_229: public VVSSVertex {
 public:
  FRModelV_V_229() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(23,23,35,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x2 = model_->TH1x2();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((((((sqr(cw)*ii)*sqr(gw))*sqr(TH1x2))/2.0)+(((((cw*ii)*g1)*gw)*sw)*sqr(TH1x2)))+((((ii*sqr(g1))*sqr(sw))*sqr(TH1x2))/2.0))+((((sqr(cw)*ii)*sqr(gw))*sqr(TH2x2))/2.0))+(((((cw*ii)*g1)*gw)*sw)*sqr(TH2x2)))+((((ii*sqr(g1))*sqr(sw))*sqr(TH2x2))/2.0)))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_229 & operator=(const FRModelV_V_229 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_229,Helicity::VVSSVertex>
describeHerwigFRModelV_V_229("Herwig::FRModelV_V_229",
				       "FRModel.so");
// void FRModelV_V_229::getParams(Energy2 ) {
// }

class FRModelV_V_230: public VVSSVertex {
 public:
  FRModelV_V_230() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(23,23,36,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH3x3 = model_->TH3x3();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((((((sqr(cw)*ii)*sqr(gw))*sqr(TH3x3))/2.0)+(((((cw*ii)*g1)*gw)*sw)*sqr(TH3x3)))+((((ii*sqr(g1))*sqr(sw))*sqr(TH3x3))/2.0)))*1.0));
    
    
    
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_230 & operator=(const FRModelV_V_230 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_230,Helicity::VVSSVertex>
describeHerwigFRModelV_V_230("Herwig::FRModelV_V_230",
				       "FRModel.so");
// void FRModelV_V_230::getParams(Energy2 ) {
// }

class FRModelV_V_231: public VVVVVertex {
 public:
  FRModelV_V_231() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,24,23,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr p2,tcPDPtr p3,tcPDPtr p4) {
    double gw = model_->gw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm((0.5*((ii*1.0)*(((-2.0*sqr(cw))*ii)*sqr(gw)))));
    
    
    bool done[4]={false,false,false,false};
    tcPDPtr part[4]={p1,p2,p3,p4};
    unsigned int iorder[4]={0,0,0,0};
    for(unsigned int ix=0;ix<4;++ix) {
       if(!done[0] && part[ix]->id()==-24) {done[0]=true; iorder[0] = ix; continue;}
       if(!done[1] && part[ix]->id()==24) {done[1]=true; iorder[1] = ix; continue;}
       if(!done[2] && part[ix]->id()==23) {done[2]=true; iorder[2] = ix; continue;}
       if(!done[3] && part[ix]->id()==23) {done[3]=true; iorder[3] = ix; continue;}
    }
    setType(2);
    setOrder(iorder[0],iorder[1],iorder[2],iorder[3]);
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,2);
    orderInCoupling(CouplingType::QCD,0);

    VVVVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_231 & operator=(const FRModelV_V_231 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_231,Helicity::VVVVVertex>
describeHerwigFRModelV_V_231("Herwig::FRModelV_V_231",
				       "FRModel.so");
// void FRModelV_V_231::getParams(Energy2 ) {
// }

class FRModelV_V_232: public FFVVertex {
 public:
  FRModelV_V_232() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-12,12,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*g1))/2.0)+(((ii*gw)*sw)/2.0))));
    right(0.0);
    if(p1->id()!=-12) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,1);
    orderInCoupling(CouplingType::QCD,0);

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_232 & operator=(const FRModelV_V_232 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_232,Helicity::FFVVertex>
describeHerwigFRModelV_V_232("Herwig::FRModelV_V_232",
				       "FRModel.so");
// void FRModelV_V_232::getParams(Energy2 ) {
// }

class FRModelV_V_233: public FFVVertex {
 public:
  FRModelV_V_233() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-14,14,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*g1))/2.0)+(((ii*gw)*sw)/2.0))));
    right(0.0);
    if(p1->id()!=-14) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,1);
    orderInCoupling(CouplingType::QCD,0);

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_233 & operator=(const FRModelV_V_233 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_233,Helicity::FFVVertex>
describeHerwigFRModelV_V_233("Herwig::FRModelV_V_233",
				       "FRModel.so");
// void FRModelV_V_233::getParams(Energy2 ) {
// }

class FRModelV_V_234: public FFVVertex {
 public:
  FRModelV_V_234() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-16,16,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*g1))/2.0)+(((ii*gw)*sw)/2.0))));
    right(0.0);
    if(p1->id()!=-16) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,1);
    orderInCoupling(CouplingType::QCD,0);

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_234 & operator=(const FRModelV_V_234 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_234,Helicity::FFVVertex>
describeHerwigFRModelV_V_234("Herwig::FRModelV_V_234",
				       "FRModel.so");
// void FRModelV_V_234::getParams(Energy2 ) {
// }

class FRModelV_V_235: public FFVVertex {
 public:
  FRModelV_V_235() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-11,12,-24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
    right(0.0);
    if(p1->id()!=-11) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,1);
    orderInCoupling(CouplingType::QCD,0);

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_235 & operator=(const FRModelV_V_235 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_235,Helicity::FFVVertex>
describeHerwigFRModelV_V_235("Herwig::FRModelV_V_235",
				       "FRModel.so");
// void FRModelV_V_235::getParams(Energy2 ) {
// }

class FRModelV_V_236: public FFVVertex {
 public:
  FRModelV_V_236() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-13,14,-24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
    right(0.0);
    if(p1->id()!=-13) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
  }
  void persistentOutput(PersistentOStream & os) const { os << model_; }
  void persistentInput(PersistentIStream & is, int) { is >> model_; }
  //  static void Init();
 protected:
  IBPtr clone() const { return new_ptr(*this); }
  IBPtr fullclone() const { return new_ptr(*this); }
  void doinit() {
    model_ = dynamic_ptr_cast<tcHwFRModelPtr>
	     (generator()->standardModel());
    assert(model_);
    //    getParams(q2);
    
        orderInCoupling(CouplingType::QED,1);
    orderInCoupling(CouplingType::QCD,0);

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_236 & operator=(const FRModelV_V_236 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_236,Helicity::FFVVertex>
describeHerwigFRModelV_V_236("Herwig::FRModelV_V_236",
				       "FRModel.so");
// void FRModelV_V_236::getParams(Energy2 ) {
// }

}
