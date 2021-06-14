// -*- C++ -*-
//
// FRModel_Vertices_001.cc is a part of Herwig - A multi-purpose Monte Carlo event generator
// Copyright (C) 2002-2007 The Herwig Collaboration
//
// Herwig is licenced under version 2 of the GPL, see COPYING for details.
// Please respect the MCnet academic guidelines, see GUIDELINES for details.

#include "FRModel.h"
#include "ThePEG/Helicity/Vertex/Scalar/VSSVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/SSSVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/SSSSVertex.h"
#include "ThePEG/Helicity/Vertex/Vector/VVVVVertex.h"
#include "ThePEG/Helicity/Vertex/Vector/VVVVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/FFSVertex.h"
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

  class FRModelV_V_4: public SSSSVertex {
 public:
  FRModelV_V_4() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-37,-37,37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double l2 = model_->l2();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*((-4.0*ii)*l2)));
    
    
    
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

    SSSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_4 & operator=(const FRModelV_V_4 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_4,Helicity::SSSSVertex>
describeHerwigFRModelV_V_4("Herwig::FRModelV_V_4",
				       "FRModel.so");
// void FRModelV_V_4::getParams(Energy2 ) {
// }

class FRModelV_V_17: public VVSSVertex {
 public:
  FRModelV_V_17() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,22,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((sqr(cw)*ii)*sqr(g1))/2.0)+((((cw*ii)*g1)*gw)*sw))+(((ii*sqr(gw))*sqr(sw))/2.0)))*1.0));
    
    
    
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
  FRModelV_V_17 & operator=(const FRModelV_V_17 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_17,Helicity::VVSSVertex>
describeHerwigFRModelV_V_17("Herwig::FRModelV_V_17",
				       "FRModel.so");
// void FRModelV_V_17::getParams(Energy2 ) {
// }

class FRModelV_V_19: public VSSVertex {
 public:
  FRModelV_V_19() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((-((cw*ii)*g1))/2.0)-(((ii*gw)*sw)/2.0)))*1.0));
    
    
    if(p2->id()!=-37){norm(-norm());}
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

    VSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_19 & operator=(const FRModelV_V_19 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_19,Helicity::VSSVertex>
describeHerwigFRModelV_V_19("Herwig::FRModelV_V_19",
				       "FRModel.so");
// void FRModelV_V_19::getParams(Energy2 ) {
// }

class FRModelV_V_43: public VVVVertex {
 public:
  FRModelV_V_43() {
    
    colourStructure(ColourStructure::SU3F);
    addToList(21,21,21);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double G = model_->G();
    
    //    getParams(q2);
    norm(((ii*((-ii)*1.0))*(-G)));
    
    
    
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
    
        orderInCoupling(CouplingType::QED,0);
    orderInCoupling(CouplingType::QCD,1);

    VVVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_43 & operator=(const FRModelV_V_43 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_43,Helicity::VVVVertex>
describeHerwigFRModelV_V_43("Herwig::FRModelV_V_43",
				       "FRModel.so");
// void FRModelV_V_43::getParams(Energy2 ) {
// }

class FRModelV_V_44: public VVVVVertex {
 public:
  FRModelV_V_44() {
    
    colourStructure(ColourStructure::SU3FF);
    addToList(21,21,21,21);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr p2,tcPDPtr p3,tcPDPtr p4) {
    double G = model_->G();
    
    //    getParams(q2);
    norm(((-1.0*(ii*1.0))*(ii*sqr(G))));
    
    
    setType(1);
setOrder(0,1,2,3);
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
    
        orderInCoupling(CouplingType::QED,0);
    orderInCoupling(CouplingType::QCD,2);

    VVVVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_44 & operator=(const FRModelV_V_44 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_44,Helicity::VVVVVertex>
describeHerwigFRModelV_V_44("Herwig::FRModelV_V_44",
				       "FRModel.so");
// void FRModelV_V_44::getParams(Energy2 ) {
// }

class FRModelV_V_45: public FFSVertex {
 public:
  FRModelV_V_45() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-16,15,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double ymtau = model_->ymtau();
    double tanbeta = model_->tanbeta();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(-((((ii*tanbeta)*ymtau)*sqrt(2.0))/vev))));
    right(0.0);
    
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

    FFSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_45 & operator=(const FRModelV_V_45 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_45,Helicity::FFSVertex>
describeHerwigFRModelV_V_45("Herwig::FRModelV_V_45",
				       "FRModel.so");
// void FRModelV_V_45::getParams(Energy2 ) {
// }

class FRModelV_V_46: public FFSVertex {
 public:
  FRModelV_V_46() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-6,5,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    Complex I2a33 = model_->I2a33();
    Complex I1a33 = model_->I1a33();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(-(ii*I1a33))));
    right(((((-ii)*1.0)*1.0)*(ii*I2a33)));
    
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

    FFSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_46 & operator=(const FRModelV_V_46 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_46,Helicity::FFSVertex>
describeHerwigFRModelV_V_46("Herwig::FRModelV_V_46",
				       "FRModel.so");
// void FRModelV_V_46::getParams(Energy2 ) {
// }

class FRModelV_V_47: public FFSVertex {
 public:
  FRModelV_V_47() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-5,6,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    Complex I4a33 = model_->I4a33();
    Complex I3a33 = model_->I3a33();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(ii*I3a33)));
    right(((((-ii)*1.0)*1.0)*(-(ii*I4a33))));
    
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

    FFSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_47 & operator=(const FRModelV_V_47 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_47,Helicity::FFSVertex>
describeHerwigFRModelV_V_47("Herwig::FRModelV_V_47",
				       "FRModel.so");
// void FRModelV_V_47::getParams(Energy2 ) {
// }

class FRModelV_V_54: public FFSVertex {
 public:
  FRModelV_V_54() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-15,16,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double ymtau = model_->ymtau();
    double tanbeta = model_->tanbeta();
    
    //    getParams(q2);
    norm(1.0);
    left(0.0);
    right(((((-ii)*1.0)*1.0)*(-((((ii*tanbeta)*ymtau)*sqrt(2.0))/vev))));
    
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

    FFSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_54 & operator=(const FRModelV_V_54 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_54,Helicity::FFSVertex>
describeHerwigFRModelV_V_54("Herwig::FRModelV_V_54",
				       "FRModel.so");
// void FRModelV_V_54::getParams(Energy2 ) {
// }

class FRModelV_V_57: public VSSVertex {
 public:
  FRModelV_V_57() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,25,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH3x3 = model_->TH3x3();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((-(((cw*g1)*TH2x1)*TH3x3))/2.0)+((((gw*sw)*TH2x1)*TH3x3)/2.0)))*1.0));
    
    
    if(p2->id()!=25){norm(-norm());}
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

    VSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_57 & operator=(const FRModelV_V_57 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_57,Helicity::VSSVertex>
describeHerwigFRModelV_V_57("Herwig::FRModelV_V_57",
				       "FRModel.so");
// void FRModelV_V_57::getParams(Energy2 ) {
// }

class FRModelV_V_58: public VSSVertex {
 public:
  FRModelV_V_58() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,35,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH3x3 = model_->TH3x3();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((-(((cw*g1)*TH2x2)*TH3x3))/2.0)+((((gw*sw)*TH2x2)*TH3x3)/2.0)))*1.0));
    
    
    if(p2->id()!=35){norm(-norm());}
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

    VSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_58 & operator=(const FRModelV_V_58 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_58,Helicity::VSSVertex>
describeHerwigFRModelV_V_58("Herwig::FRModelV_V_58",
				       "FRModel.so");
// void FRModelV_V_58::getParams(Energy2 ) {
// }

class FRModelV_V_59: public VVSVertex {
 public:
  FRModelV_V_59() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,22,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double gw = model_->gw();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x1 = model_->TH1x1();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(Complex((((((-ii)*1.0)*(((((((sqr(cw)*ii)*sqr(g1))*TH1x1)*vev)/2.0)-((((((cw*ii)*g1)*gw)*sw)*TH1x1)*vev))+(((((ii*sqr(gw))*sqr(sw))*TH1x1)*vev)/2.0)))*1.0)) * GeV / UnitRemoval::E));
    
    
    
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
  FRModelV_V_59 & operator=(const FRModelV_V_59 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_59,Helicity::VVSVertex>
describeHerwigFRModelV_V_59("Herwig::FRModelV_V_59",
				       "FRModel.so");
// void FRModelV_V_59::getParams(Energy2 ) {
// }

class FRModelV_V_60: public VVSVertex {
 public:
  FRModelV_V_60() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,22,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double gw = model_->gw();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x2 = model_->TH1x2();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(Complex((((((-ii)*1.0)*(((((((sqr(cw)*ii)*sqr(g1))*TH1x2)*vev)/2.0)-((((((cw*ii)*g1)*gw)*sw)*TH1x2)*vev))+(((((ii*sqr(gw))*sqr(sw))*TH1x2)*vev)/2.0)))*1.0)) * GeV / UnitRemoval::E));
    
    
    
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
  FRModelV_V_60 & operator=(const FRModelV_V_60 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_60,Helicity::VVSVertex>
describeHerwigFRModelV_V_60("Herwig::FRModelV_V_60",
				       "FRModel.so");
// void FRModelV_V_60::getParams(Energy2 ) {
// }

class FRModelV_V_61: public VVSSVertex {
 public:
  FRModelV_V_61() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,22,25,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x1 = model_->TH1x1();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((((((sqr(cw)*ii)*sqr(g1))*sqr(TH1x1))/2.0)-(((((cw*ii)*g1)*gw)*sw)*sqr(TH1x1)))+((((ii*sqr(gw))*sqr(sw))*sqr(TH1x1))/2.0))+((((sqr(cw)*ii)*sqr(g1))*sqr(TH2x1))/2.0))-(((((cw*ii)*g1)*gw)*sw)*sqr(TH2x1)))+((((ii*sqr(gw))*sqr(sw))*sqr(TH2x1))/2.0)))*1.0));
    
    
    
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
  FRModelV_V_61 & operator=(const FRModelV_V_61 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_61,Helicity::VVSSVertex>
describeHerwigFRModelV_V_61("Herwig::FRModelV_V_61",
				       "FRModel.so");
// void FRModelV_V_61::getParams(Energy2 ) {
// }

class FRModelV_V_62: public VVSSVertex {
 public:
  FRModelV_V_62() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,22,25,35);
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
    norm(((((-ii)*1.0)*((((((((((sqr(cw)*ii)*sqr(g1))*TH1x1)*TH1x2)/2.0)-((((((cw*ii)*g1)*gw)*sw)*TH1x1)*TH1x2))+(((((ii*sqr(gw))*sqr(sw))*TH1x1)*TH1x2)/2.0))+(((((sqr(cw)*ii)*sqr(g1))*TH2x1)*TH2x2)/2.0))-((((((cw*ii)*g1)*gw)*sw)*TH2x1)*TH2x2))+(((((ii*sqr(gw))*sqr(sw))*TH2x1)*TH2x2)/2.0)))*1.0));
    
    
    
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
  FRModelV_V_62 & operator=(const FRModelV_V_62 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_62,Helicity::VVSSVertex>
describeHerwigFRModelV_V_62("Herwig::FRModelV_V_62",
				       "FRModel.so");
// void FRModelV_V_62::getParams(Energy2 ) {
// }

class FRModelV_V_63: public VVSSVertex {
 public:
  FRModelV_V_63() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,22,35,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x2 = model_->TH1x2();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((((((sqr(cw)*ii)*sqr(g1))*sqr(TH1x2))/2.0)-(((((cw*ii)*g1)*gw)*sw)*sqr(TH1x2)))+((((ii*sqr(gw))*sqr(sw))*sqr(TH1x2))/2.0))+((((sqr(cw)*ii)*sqr(g1))*sqr(TH2x2))/2.0))-(((((cw*ii)*g1)*gw)*sw)*sqr(TH2x2)))+((((ii*sqr(gw))*sqr(sw))*sqr(TH2x2))/2.0)))*1.0));
    
    
    
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
  FRModelV_V_63 & operator=(const FRModelV_V_63 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_63,Helicity::VVSSVertex>
describeHerwigFRModelV_V_63("Herwig::FRModelV_V_63",
				       "FRModel.so");
// void FRModelV_V_63::getParams(Energy2 ) {
// }

class FRModelV_V_64: public VVSSVertex {
 public:
  FRModelV_V_64() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,22,36,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH3x3 = model_->TH3x3();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((((((sqr(cw)*ii)*sqr(g1))*sqr(TH3x3))/2.0)-(((((cw*ii)*g1)*gw)*sw)*sqr(TH3x3)))+((((ii*sqr(gw))*sqr(sw))*sqr(TH3x3))/2.0)))*1.0));
    
    
    
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
  FRModelV_V_64 & operator=(const FRModelV_V_64 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_64,Helicity::VVSSVertex>
describeHerwigFRModelV_V_64("Herwig::FRModelV_V_64",
				       "FRModel.so");
// void FRModelV_V_64::getParams(Energy2 ) {
// }

class FRModelV_V_85: public SSSVertex {
 public:
  FRModelV_V_85() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,25,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x1 = model_->TH2x1();
    double TH1x1 = model_->TH1x1();
    Complex l6 = model_->l6();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l3 = model_->l3();
    double l1 = model_->l1();
    
    //    getParams(q2);
    norm(Complex(((((-ii)*1.0)*(((((((((-6.0*ii)*l1)*pow(TH1x1,3.0))*vev)-(((((9.0*ii)*l6)*sqr(TH1x1))*TH2x1)*vev))-(((((3.0*ii)*l3)*TH1x1)*sqr(TH2x1))*vev))-(((((3.0*ii)*l4)*TH1x1)*sqr(TH2x1))*vev))-(((((6.0*ii)*l5)*TH1x1)*sqr(TH2x1))*vev))-((((3.0*ii)*l7)*pow(TH2x1,3.0))*vev)))) * GeV / UnitRemoval::E));
    
    
    
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

    SSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_85 & operator=(const FRModelV_V_85 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_85,Helicity::SSSVertex>
describeHerwigFRModelV_V_85("Herwig::FRModelV_V_85",
				       "FRModel.so");
// void FRModelV_V_85::getParams(Energy2 ) {
// }

class FRModelV_V_86: public SSSVertex {
 public:
  FRModelV_V_86() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,25,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x2 = model_->TH2x2();
    double TH2x1 = model_->TH2x1();
    double TH1x1 = model_->TH1x1();
    double TH1x2 = model_->TH1x2();
    Complex l6 = model_->l6();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l3 = model_->l3();
    double l1 = model_->l1();
    
    //    getParams(q2);
    norm(Complex(((((-ii)*1.0)*((((((((((((((-6.0*ii)*l1)*sqr(TH1x1))*TH1x2)*vev)-((((((6.0*ii)*l6)*TH1x1)*TH1x2)*TH2x1)*vev))-((((ii*l3)*TH1x2)*sqr(TH2x1))*vev))-((((ii*l4)*TH1x2)*sqr(TH2x1))*vev))-(((((2.0*ii)*l5)*TH1x2)*sqr(TH2x1))*vev))-(((((3.0*ii)*l6)*sqr(TH1x1))*TH2x2)*vev))-((((((2.0*ii)*l3)*TH1x1)*TH2x1)*TH2x2)*vev))-((((((2.0*ii)*l4)*TH1x1)*TH2x1)*TH2x2)*vev))-((((((4.0*ii)*l5)*TH1x1)*TH2x1)*TH2x2)*vev))-(((((3.0*ii)*l7)*sqr(TH2x1))*TH2x2)*vev)))) * GeV / UnitRemoval::E));
    
    
    
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

    SSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_86 & operator=(const FRModelV_V_86 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_86,Helicity::SSSVertex>
describeHerwigFRModelV_V_86("Herwig::FRModelV_V_86",
				       "FRModel.so");
// void FRModelV_V_86::getParams(Energy2 ) {
// }

class FRModelV_V_87: public SSSVertex {
 public:
  FRModelV_V_87() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,35,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x2 = model_->TH2x2();
    double TH2x1 = model_->TH2x1();
    double TH1x1 = model_->TH1x1();
    double TH1x2 = model_->TH1x2();
    Complex l6 = model_->l6();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l3 = model_->l3();
    double l1 = model_->l1();
    
    //    getParams(q2);
    norm(Complex(((((-ii)*1.0)*((((((((((((((-6.0*ii)*l1)*TH1x1)*sqr(TH1x2))*vev)-(((((3.0*ii)*l6)*sqr(TH1x2))*TH2x1)*vev))-((((((6.0*ii)*l6)*TH1x1)*TH1x2)*TH2x2)*vev))-((((((2.0*ii)*l3)*TH1x2)*TH2x1)*TH2x2)*vev))-((((((2.0*ii)*l4)*TH1x2)*TH2x1)*TH2x2)*vev))-((((((4.0*ii)*l5)*TH1x2)*TH2x1)*TH2x2)*vev))-((((ii*l3)*TH1x1)*sqr(TH2x2))*vev))-((((ii*l4)*TH1x1)*sqr(TH2x2))*vev))-(((((2.0*ii)*l5)*TH1x1)*sqr(TH2x2))*vev))-(((((3.0*ii)*l7)*TH2x1)*sqr(TH2x2))*vev)))) * GeV / UnitRemoval::E));
    
    
    
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

    SSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_87 & operator=(const FRModelV_V_87 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_87,Helicity::SSSVertex>
describeHerwigFRModelV_V_87("Herwig::FRModelV_V_87",
				       "FRModel.so");
// void FRModelV_V_87::getParams(Energy2 ) {
// }

class FRModelV_V_88: public SSSVertex {
 public:
  FRModelV_V_88() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,36,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x1 = model_->TH2x1();
    double TH1x1 = model_->TH1x1();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l3 = model_->l3();
    double TH3x3 = model_->TH3x3();
    
    //    getParams(q2);
    norm(Complex(((((-ii)*1.0)*((((-((((ii*l3)*TH1x1)*sqr(TH3x3))*vev))-((((ii*l4)*TH1x1)*sqr(TH3x3))*vev))+(((((2.0*ii)*l5)*TH1x1)*sqr(TH3x3))*vev))-((((ii*l7)*TH2x1)*sqr(TH3x3))*vev)))) * GeV / UnitRemoval::E));
    
    
    
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

    SSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_88 & operator=(const FRModelV_V_88 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_88,Helicity::SSSVertex>
describeHerwigFRModelV_V_88("Herwig::FRModelV_V_88",
				       "FRModel.so");
// void FRModelV_V_88::getParams(Energy2 ) {
// }

class FRModelV_V_89: public SSSVertex {
 public:
  FRModelV_V_89() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(35,35,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x2 = model_->TH2x2();
    double TH1x2 = model_->TH1x2();
    Complex l6 = model_->l6();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l3 = model_->l3();
    double l1 = model_->l1();
    
    //    getParams(q2);
    norm(Complex(((((-ii)*1.0)*(((((((((-6.0*ii)*l1)*pow(TH1x2,3.0))*vev)-(((((9.0*ii)*l6)*sqr(TH1x2))*TH2x2)*vev))-(((((3.0*ii)*l3)*TH1x2)*sqr(TH2x2))*vev))-(((((3.0*ii)*l4)*TH1x2)*sqr(TH2x2))*vev))-(((((6.0*ii)*l5)*TH1x2)*sqr(TH2x2))*vev))-((((3.0*ii)*l7)*pow(TH2x2,3.0))*vev)))) * GeV / UnitRemoval::E));
    
    
    
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

    SSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_89 & operator=(const FRModelV_V_89 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_89,Helicity::SSSVertex>
describeHerwigFRModelV_V_89("Herwig::FRModelV_V_89",
				       "FRModel.so");
// void FRModelV_V_89::getParams(Energy2 ) {
// }

class FRModelV_V_90: public SSSVertex {
 public:
  FRModelV_V_90() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(35,36,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x2 = model_->TH2x2();
    double TH3x3 = model_->TH3x3();
    double TH1x2 = model_->TH1x2();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l3 = model_->l3();
    
    //    getParams(q2);
    norm(Complex(((((-ii)*1.0)*((((-((((ii*l3)*TH1x2)*sqr(TH3x3))*vev))-((((ii*l4)*TH1x2)*sqr(TH3x3))*vev))+(((((2.0*ii)*l5)*TH1x2)*sqr(TH3x3))*vev))-((((ii*l7)*TH2x2)*sqr(TH3x3))*vev)))) * GeV / UnitRemoval::E));
    
    
    
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

    SSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_90 & operator=(const FRModelV_V_90 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_90,Helicity::SSSVertex>
describeHerwigFRModelV_V_90("Herwig::FRModelV_V_90",
				       "FRModel.so");
// void FRModelV_V_90::getParams(Energy2 ) {
// }

class FRModelV_V_91: public SSSSVertex {
 public:
  FRModelV_V_91() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,25,25,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double TH2x1 = model_->TH2x1();
    double TH1x1 = model_->TH1x1();
    Complex l6 = model_->l6();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l2 = model_->l2();
    double l3 = model_->l3();
    double l1 = model_->l1();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*(((((((((-6.0*ii)*l1)*pow(TH1x1,4.0))-((((12.0*ii)*l6)*pow(TH1x1,3.0))*TH2x1))-((((6.0*ii)*l3)*sqr(TH1x1))*sqr(TH2x1)))-((((6.0*ii)*l4)*sqr(TH1x1))*sqr(TH2x1)))-((((12.0*ii)*l5)*sqr(TH1x1))*sqr(TH2x1)))-((((12.0*ii)*l7)*TH1x1)*pow(TH2x1,3.0)))-(((6.0*ii)*l2)*pow(TH2x1,4.0)))));
    
    
    
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

    SSSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_91 & operator=(const FRModelV_V_91 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_91,Helicity::SSSSVertex>
describeHerwigFRModelV_V_91("Herwig::FRModelV_V_91",
				       "FRModel.so");
// void FRModelV_V_91::getParams(Energy2 ) {
// }

class FRModelV_V_92: public SSSSVertex {
 public:
  FRModelV_V_92() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,25,25,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double TH2x2 = model_->TH2x2();
    double TH2x1 = model_->TH2x1();
    double TH1x1 = model_->TH1x1();
    double TH1x2 = model_->TH1x2();
    Complex l6 = model_->l6();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l2 = model_->l2();
    double l3 = model_->l3();
    double l1 = model_->l1();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*(((((((((((((((-6.0*ii)*l1)*pow(TH1x1,3.0))*TH1x2)-(((((9.0*ii)*l6)*sqr(TH1x1))*TH1x2)*TH2x1))-(((((3.0*ii)*l3)*TH1x1)*TH1x2)*sqr(TH2x1)))-(((((3.0*ii)*l4)*TH1x1)*TH1x2)*sqr(TH2x1)))-(((((6.0*ii)*l5)*TH1x1)*TH1x2)*sqr(TH2x1)))-((((3.0*ii)*l7)*TH1x2)*pow(TH2x1,3.0)))-((((3.0*ii)*l6)*pow(TH1x1,3.0))*TH2x2))-(((((3.0*ii)*l3)*sqr(TH1x1))*TH2x1)*TH2x2))-(((((3.0*ii)*l4)*sqr(TH1x1))*TH2x1)*TH2x2))-(((((6.0*ii)*l5)*sqr(TH1x1))*TH2x1)*TH2x2))-(((((9.0*ii)*l7)*TH1x1)*sqr(TH2x1))*TH2x2))-((((6.0*ii)*l2)*pow(TH2x1,3.0))*TH2x2))));
    
    
    
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

    SSSSVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_92 & operator=(const FRModelV_V_92 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_92,Helicity::SSSSVertex>
describeHerwigFRModelV_V_92("Herwig::FRModelV_V_92",
				       "FRModel.so");
// void FRModelV_V_92::getParams(Energy2 ) {
// }

}
