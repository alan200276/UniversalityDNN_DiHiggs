// -*- C++ -*-
//
// FRModel_Vertices_003.cc is a part of Herwig - A multi-purpose Monte Carlo event generator
// Copyright (C) 2002-2007 The Herwig Collaboration
//
// Herwig is licenced under version 2 of the GPL, see COPYING for details.
// Please respect the MCnet academic guidelines, see GUIDELINES for details.

#include "FRModel.h"
#include "ThePEG/Helicity/Vertex/Vector/VVVVVertex.h"
#include "ThePEG/Helicity/Vertex/Vector/VVVVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/VSSVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/VVSSVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/VVSVertex.h"

#include "ThePEG/Utilities/DescribeClass.h"
#include "ThePEG/Persistency/PersistentOStream.h"
#include "ThePEG/Persistency/PersistentIStream.h"

namespace Herwig 
{
  using namespace ThePEG;
  using namespace ThePEG::Helicity;
  using ThePEG::Constants::pi;

  class FRModelV_V_162: public VSSVertex {
 public:
  FRModelV_V_162() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,36,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double TH3x3 = model_->TH3x3();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((gw*TH3x3)/2.0))*1.0));
    
    
    if(p2->id()!=36){norm(-norm());}
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
  FRModelV_V_162 & operator=(const FRModelV_V_162 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_162,Helicity::VSSVertex>
describeHerwigFRModelV_V_162("Herwig::FRModelV_V_162",
				       "FRModel.so");
// void FRModelV_V_162::getParams(Energy2 ) {
// }

class FRModelV_V_163: public VVSSVertex {
 public:
  FRModelV_V_163() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,-24,25,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    double cw = model_->cw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((cw*ii)*g1)*gw)*TH2x1)/2.0))*1.0));
    
    
    
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
  FRModelV_V_163 & operator=(const FRModelV_V_163 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_163,Helicity::VVSSVertex>
describeHerwigFRModelV_V_163("Herwig::FRModelV_V_163",
				       "FRModel.so");
// void FRModelV_V_163::getParams(Energy2 ) {
// }

class FRModelV_V_164: public VVSSVertex {
 public:
  FRModelV_V_164() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,-24,35,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double cw = model_->cw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((cw*ii)*g1)*gw)*TH2x2)/2.0))*1.0));
    
    
    
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
  FRModelV_V_164 & operator=(const FRModelV_V_164 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_164,Helicity::VVSSVertex>
describeHerwigFRModelV_V_164("Herwig::FRModelV_V_164",
				       "FRModel.so");
// void FRModelV_V_164::getParams(Energy2 ) {
// }

class FRModelV_V_165: public VVSSVertex {
 public:
  FRModelV_V_165() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,-24,36,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH3x3 = model_->TH3x3();
    double cw = model_->cw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((-(((cw*g1)*gw)*TH3x3))/2.0))*1.0));
    
    
    
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
  FRModelV_V_165 & operator=(const FRModelV_V_165 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_165,Helicity::VVSSVertex>
describeHerwigFRModelV_V_165("Herwig::FRModelV_V_165",
				       "FRModel.so");
// void FRModelV_V_165::getParams(Energy2 ) {
// }

class FRModelV_V_173: public VSSVertex {
 public:
  FRModelV_V_173() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(24,25,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((ii*gw)*TH2x1)/2.0))*1.0));
    
    
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
  FRModelV_V_173 & operator=(const FRModelV_V_173 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_173,Helicity::VSSVertex>
describeHerwigFRModelV_V_173("Herwig::FRModelV_V_173",
				       "FRModel.so");
// void FRModelV_V_173::getParams(Energy2 ) {
// }

class FRModelV_V_174: public VSSVertex {
 public:
  FRModelV_V_174() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(24,35,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((ii*gw)*TH2x2)/2.0))*1.0));
    
    
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
  FRModelV_V_174 & operator=(const FRModelV_V_174 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_174,Helicity::VSSVertex>
describeHerwigFRModelV_V_174("Herwig::FRModelV_V_174",
				       "FRModel.so");
// void FRModelV_V_174::getParams(Energy2 ) {
// }

class FRModelV_V_175: public VSSVertex {
 public:
  FRModelV_V_175() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(24,36,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double TH3x3 = model_->TH3x3();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((gw*TH3x3)/2.0))*1.0));
    
    
    if(p2->id()!=36){norm(-norm());}
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
  FRModelV_V_175 & operator=(const FRModelV_V_175 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_175,Helicity::VSSVertex>
describeHerwigFRModelV_V_175("Herwig::FRModelV_V_175",
				       "FRModel.so");
// void FRModelV_V_175::getParams(Energy2 ) {
// }

class FRModelV_V_176: public VVSSVertex {
 public:
  FRModelV_V_176() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,24,25,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    double cw = model_->cw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((cw*ii)*g1)*gw)*TH2x1)/2.0))*1.0));
    
    
    
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
  FRModelV_V_176 & operator=(const FRModelV_V_176 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_176,Helicity::VVSSVertex>
describeHerwigFRModelV_V_176("Herwig::FRModelV_V_176",
				       "FRModel.so");
// void FRModelV_V_176::getParams(Energy2 ) {
// }

class FRModelV_V_177: public VVSSVertex {
 public:
  FRModelV_V_177() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,24,35,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double cw = model_->cw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((cw*ii)*g1)*gw)*TH2x2)/2.0))*1.0));
    
    
    
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
  FRModelV_V_177 & operator=(const FRModelV_V_177 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_177,Helicity::VVSSVertex>
describeHerwigFRModelV_V_177("Herwig::FRModelV_V_177",
				       "FRModel.so");
// void FRModelV_V_177::getParams(Energy2 ) {
// }

class FRModelV_V_178: public VVSSVertex {
 public:
  FRModelV_V_178() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,24,36,-37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH3x3 = model_->TH3x3();
    double cw = model_->cw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((((cw*g1)*gw)*TH3x3)/2.0))*1.0));
    
    
    
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
  FRModelV_V_178 & operator=(const FRModelV_V_178 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_178,Helicity::VVSSVertex>
describeHerwigFRModelV_V_178("Herwig::FRModelV_V_178",
				       "FRModel.so");
// void FRModelV_V_178::getParams(Energy2 ) {
// }

class FRModelV_V_181: public VVSSVertex {
 public:
  FRModelV_V_181() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,24,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((ii*sqr(gw))/2.0))*1.0));
    
    
    
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
  FRModelV_V_181 & operator=(const FRModelV_V_181 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_181,Helicity::VVSSVertex>
describeHerwigFRModelV_V_181("Herwig::FRModelV_V_181",
				       "FRModel.so");
// void FRModelV_V_181::getParams(Energy2 ) {
// }

class FRModelV_V_182: public VVVVVertex {
 public:
  FRModelV_V_182() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,22,-24,24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr p2,tcPDPtr p3,tcPDPtr p4) {
    double gw = model_->gw();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm((0.5*((ii*1.0)*(((-2.0*ii)*sqr(gw))*sqr(sw)))));
    
    
    bool done[4]={false,false,false,false};
    tcPDPtr part[4]={p1,p2,p3,p4};
    unsigned int iorder[4]={0,0,0,0};
    for(unsigned int ix=0;ix<4;++ix) {
       if(!done[0] && part[ix]->id()==22) {done[0]=true; iorder[0] = ix; continue;}
       if(!done[1] && part[ix]->id()==22) {done[1]=true; iorder[1] = ix; continue;}
       if(!done[2] && part[ix]->id()==-24) {done[2]=true; iorder[2] = ix; continue;}
       if(!done[3] && part[ix]->id()==24) {done[3]=true; iorder[3] = ix; continue;}
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
  FRModelV_V_182 & operator=(const FRModelV_V_182 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_182,Helicity::VVVVVertex>
describeHerwigFRModelV_V_182("Herwig::FRModelV_V_182",
				       "FRModel.so");
// void FRModelV_V_182::getParams(Energy2 ) {
// }

class FRModelV_V_183: public VVSVertex {
 public:
  FRModelV_V_183() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,24,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH1x1 = model_->TH1x1();
    double vev = model_->vev();
    
    //    getParams(q2);
    norm(Complex((((((-ii)*1.0)*((((ii*sqr(gw))*TH1x1)*vev)/2.0))*1.0)) * GeV / UnitRemoval::E));
    
    
    
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
  FRModelV_V_183 & operator=(const FRModelV_V_183 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_183,Helicity::VVSVertex>
describeHerwigFRModelV_V_183("Herwig::FRModelV_V_183",
				       "FRModel.so");
// void FRModelV_V_183::getParams(Energy2 ) {
// }

class FRModelV_V_184: public VVSVertex {
 public:
  FRModelV_V_184() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,24,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double vev = model_->vev();
    double TH1x2 = model_->TH1x2();
    
    //    getParams(q2);
    norm(Complex((((((-ii)*1.0)*((((ii*sqr(gw))*TH1x2)*vev)/2.0))*1.0)) * GeV / UnitRemoval::E));
    
    
    
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
  FRModelV_V_184 & operator=(const FRModelV_V_184 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_184,Helicity::VVSVertex>
describeHerwigFRModelV_V_184("Herwig::FRModelV_V_184",
				       "FRModel.so");
// void FRModelV_V_184::getParams(Energy2 ) {
// }

class FRModelV_V_185: public VVSSVertex {
 public:
  FRModelV_V_185() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,24,25,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH1x1 = model_->TH1x1();
    double TH2x1 = model_->TH2x1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((((ii*sqr(gw))*sqr(TH1x1))/2.0)+(((ii*sqr(gw))*sqr(TH2x1))/2.0)))*1.0));
    
    
    
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
  FRModelV_V_185 & operator=(const FRModelV_V_185 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_185,Helicity::VVSSVertex>
describeHerwigFRModelV_V_185("Herwig::FRModelV_V_185",
				       "FRModel.so");
// void FRModelV_V_185::getParams(Energy2 ) {
// }

class FRModelV_V_186: public VVSSVertex {
 public:
  FRModelV_V_186() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,24,25,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH1x1 = model_->TH1x1();
    double TH1x2 = model_->TH1x2();
    double TH2x1 = model_->TH2x1();
    double TH2x2 = model_->TH2x2();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((ii*sqr(gw))*TH1x1)*TH1x2)/2.0)+((((ii*sqr(gw))*TH2x1)*TH2x2)/2.0)))*1.0));
    
    
    
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
  FRModelV_V_186 & operator=(const FRModelV_V_186 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_186,Helicity::VVSSVertex>
describeHerwigFRModelV_V_186("Herwig::FRModelV_V_186",
				       "FRModel.so");
// void FRModelV_V_186::getParams(Energy2 ) {
// }

class FRModelV_V_187: public VVSSVertex {
 public:
  FRModelV_V_187() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,24,35,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double TH1x2 = model_->TH1x2();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((((ii*sqr(gw))*sqr(TH1x2))/2.0)+(((ii*sqr(gw))*sqr(TH2x2))/2.0)))*1.0));
    
    
    
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
  FRModelV_V_187 & operator=(const FRModelV_V_187 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_187,Helicity::VVSSVertex>
describeHerwigFRModelV_V_187("Herwig::FRModelV_V_187",
				       "FRModel.so");
// void FRModelV_V_187::getParams(Energy2 ) {
// }

class FRModelV_V_188: public VVSSVertex {
 public:
  FRModelV_V_188() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,24,36,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double TH3x3 = model_->TH3x3();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((ii*sqr(gw))*sqr(TH3x3))/2.0))*1.0));
    
    
    
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
  FRModelV_V_188 & operator=(const FRModelV_V_188 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_188,Helicity::VVSSVertex>
describeHerwigFRModelV_V_188("Herwig::FRModelV_V_188",
				       "FRModel.so");
// void FRModelV_V_188::getParams(Energy2 ) {
// }

class FRModelV_V_189: public VVVVertex {
 public:
  FRModelV_V_189() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,24,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr p2,tcPDPtr p3) {
    double gw = model_->gw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(((ii*1.0)*((cw*ii)*gw)));
    
    
    if((p1->id()==24&&p2->id()==-24&&p3->id()==23)||(p1->id()==-24&&p2->id()==23&&p3->id()==24)||(p1->id()==23&&p2->id()==24&&p3->id()==-24)) {norm(-norm());}
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

    VVVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_189 & operator=(const FRModelV_V_189 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_189,Helicity::VVVVertex>
describeHerwigFRModelV_V_189("Herwig::FRModelV_V_189",
				       "FRModel.so");
// void FRModelV_V_189::getParams(Energy2 ) {
// }

class FRModelV_V_190: public VVVVVertex {
 public:
  FRModelV_V_190() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,-24,24,24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr p2,tcPDPtr p3,tcPDPtr p4) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm((0.5*((ii*1.0)*((2.0*ii)*sqr(gw)))));
    
    
    bool done[4]={false,false,false,false};
    tcPDPtr part[4]={p1,p2,p3,p4};
    unsigned int iorder[4]={0,0,0,0};
    for(unsigned int ix=0;ix<4;++ix) {
       if(!done[0] && part[ix]->id()==-24) {done[0]=true; iorder[0] = ix; continue;}
       if(!done[1] && part[ix]->id()==-24) {done[1]=true; iorder[1] = ix; continue;}
       if(!done[2] && part[ix]->id()==24) {done[2]=true; iorder[2] = ix; continue;}
       if(!done[3] && part[ix]->id()==24) {done[3]=true; iorder[3] = ix; continue;}
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
  FRModelV_V_190 & operator=(const FRModelV_V_190 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_190,Helicity::VVVVVertex>
describeHerwigFRModelV_V_190("Herwig::FRModelV_V_190",
				       "FRModel.so");
// void FRModelV_V_190::getParams(Energy2 ) {
// }

class FRModelV_V_194: public VVSSVertex {
 public:
  FRModelV_V_194() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,23,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((((sqr(cw)*ii)*g1)*gw)/2.0)-((((cw*ii)*sqr(g1))*sw)/2.0))+((((cw*ii)*sqr(gw))*sw)/2.0))-((((ii*g1)*gw)*sqr(sw))/2.0)))*1.0));
    
    
    
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
  FRModelV_V_194 & operator=(const FRModelV_V_194 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_194,Helicity::VVSSVertex>
describeHerwigFRModelV_V_194("Herwig::FRModelV_V_194",
				       "FRModel.so");
// void FRModelV_V_194::getParams(Energy2 ) {
// }

class FRModelV_V_196: public VSSVertex {
 public:
  FRModelV_V_196() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(23,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((-((cw*ii)*gw))/2.0)+(((ii*g1)*sw)/2.0)))*1.0));
    
    
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
  FRModelV_V_196 & operator=(const FRModelV_V_196 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_196,Helicity::VSSVertex>
describeHerwigFRModelV_V_196("Herwig::FRModelV_V_196",
				       "FRModel.so");
// void FRModelV_V_196::getParams(Energy2 ) {
// }

class FRModelV_V_199: public VSSVertex {
 public:
  FRModelV_V_199() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(23,25,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH3x3 = model_->TH3x3();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((cw*gw)*TH2x1)*TH3x3)/2.0)+((((g1*sw)*TH2x1)*TH3x3)/2.0)))*1.0));
    
    
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
  FRModelV_V_199 & operator=(const FRModelV_V_199 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_199,Helicity::VSSVertex>
describeHerwigFRModelV_V_199("Herwig::FRModelV_V_199",
				       "FRModel.so");
// void FRModelV_V_199::getParams(Energy2 ) {
// }

class FRModelV_V_200: public VSSVertex {
 public:
  FRModelV_V_200() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(23,35,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH3x3 = model_->TH3x3();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*(((((cw*gw)*TH2x2)*TH3x3)/2.0)+((((g1*sw)*TH2x2)*TH3x3)/2.0)))*1.0));
    
    
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
  FRModelV_V_200 & operator=(const FRModelV_V_200 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_200,Helicity::VSSVertex>
describeHerwigFRModelV_V_200("Herwig::FRModelV_V_200",
				       "FRModel.so");
// void FRModelV_V_200::getParams(Energy2 ) {
// }

class FRModelV_V_201: public VVSVertex {
 public:
  FRModelV_V_201() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,23,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double vev = model_->vev();
    double g1 = model_->g1();
    double cw = model_->cw();
    double TH1x1 = model_->TH1x1();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(Complex((((((-ii)*1.0)*(((((-(((((sqr(cw)*ii)*g1)*gw)*TH1x1)*vev))/2.0)-((((((cw*ii)*sqr(g1))*sw)*TH1x1)*vev)/2.0))+((((((cw*ii)*sqr(gw))*sw)*TH1x1)*vev)/2.0))+((((((ii*g1)*gw)*sqr(sw))*TH1x1)*vev)/2.0)))*1.0)) * GeV / UnitRemoval::E));
    
    
    
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
  FRModelV_V_201 & operator=(const FRModelV_V_201 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_201,Helicity::VVSVertex>
describeHerwigFRModelV_V_201("Herwig::FRModelV_V_201",
				       "FRModel.so");
// void FRModelV_V_201::getParams(Energy2 ) {
// }

}
