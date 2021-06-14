// -*- C++ -*-
//
// FRModel_Vertices_007.cc is a part of Herwig - A multi-purpose Monte Carlo event generator
// Copyright (C) 2002-2007 The Herwig Collaboration
//
// Herwig is licenced under version 2 of the GPL, see COPYING for details.
// Please respect the MCnet academic guidelines, see GUIDELINES for details.

#include "FRModel.h"
#include "ThePEG/Helicity/Vertex/Vector/FFVVertex.h"

#include "ThePEG/Utilities/DescribeClass.h"
#include "ThePEG/Persistency/PersistentOStream.h"
#include "ThePEG/Persistency/PersistentIStream.h"

namespace Herwig 
{
  using namespace ThePEG;
  using namespace ThePEG::Helicity;
  using ThePEG::Constants::pi;

  class FRModelV_V_262: public FFVVertex {
 public:
  FRModelV_V_262() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-1,1,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*g1)/6.0)-(((ii*gw)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*((-((cw*ii)*g1))/3.0)));
    if(p1->id()!=-1) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_262 & operator=(const FRModelV_V_262 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_262,Helicity::FFVVertex>
describeHerwigFRModelV_V_262("Herwig::FRModelV_V_262",
				       "FRModel.so");
// void FRModelV_V_262::getParams(Energy2 ) {
// }

class FRModelV_V_263: public FFVVertex {
 public:
  FRModelV_V_263() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-3,3,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*g1)/6.0)-(((ii*gw)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*((-((cw*ii)*g1))/3.0)));
    if(p1->id()!=-3) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_263 & operator=(const FRModelV_V_263 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_263,Helicity::FFVVertex>
describeHerwigFRModelV_V_263("Herwig::FRModelV_V_263",
				       "FRModel.so");
// void FRModelV_V_263::getParams(Energy2 ) {
// }

class FRModelV_V_264: public FFVVertex {
 public:
  FRModelV_V_264() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-5,5,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*g1)/6.0)-(((ii*gw)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*((-((cw*ii)*g1))/3.0)));
    if(p1->id()!=-5) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_264 & operator=(const FRModelV_V_264 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_264,Helicity::FFVVertex>
describeHerwigFRModelV_V_264("Herwig::FRModelV_V_264",
				       "FRModel.so");
// void FRModelV_V_264::getParams(Energy2 ) {
// }

class FRModelV_V_265: public FFVVertex {
 public:
  FRModelV_V_265() {
    
    colourStructure(ColourStructure::SU3TFUND);
    addToList(-1,1,21);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double G = model_->G();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(ii*G)));
    right(((((-ii)*1.0)*1.0)*(ii*G)));
    if(p1->id()!=-1) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_265 & operator=(const FRModelV_V_265 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_265,Helicity::FFVVertex>
describeHerwigFRModelV_V_265("Herwig::FRModelV_V_265",
				       "FRModel.so");
// void FRModelV_V_265::getParams(Energy2 ) {
// }

class FRModelV_V_266: public FFVVertex {
 public:
  FRModelV_V_266() {
    
    colourStructure(ColourStructure::SU3TFUND);
    addToList(-3,3,21);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double G = model_->G();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(ii*G)));
    right(((((-ii)*1.0)*1.0)*(ii*G)));
    if(p1->id()!=-3) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_266 & operator=(const FRModelV_V_266 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_266,Helicity::FFVVertex>
describeHerwigFRModelV_V_266("Herwig::FRModelV_V_266",
				       "FRModel.so");
// void FRModelV_V_266::getParams(Energy2 ) {
// }

class FRModelV_V_267: public FFVVertex {
 public:
  FRModelV_V_267() {
    
    colourStructure(ColourStructure::SU3TFUND);
    addToList(-5,5,21);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double G = model_->G();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(ii*G)));
    right(((((-ii)*1.0)*1.0)*(ii*G)));
    if(p1->id()!=-5) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_267 & operator=(const FRModelV_V_267 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_267,Helicity::FFVVertex>
describeHerwigFRModelV_V_267("Herwig::FRModelV_V_267",
				       "FRModel.so");
// void FRModelV_V_267::getParams(Energy2 ) {
// }

class FRModelV_V_268: public FFVVertex {
 public:
  FRModelV_V_268() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-2,1,24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
    right(0.0);
    if(p1->id()!=-2) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_268 & operator=(const FRModelV_V_268 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_268,Helicity::FFVVertex>
describeHerwigFRModelV_V_268("Herwig::FRModelV_V_268",
				       "FRModel.so");
// void FRModelV_V_268::getParams(Energy2 ) {
// }

class FRModelV_V_269: public FFVVertex {
 public:
  FRModelV_V_269() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-4,3,24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
    right(0.0);
    if(p1->id()!=-4) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_269 & operator=(const FRModelV_V_269 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_269,Helicity::FFVVertex>
describeHerwigFRModelV_V_269("Herwig::FRModelV_V_269",
				       "FRModel.so");
// void FRModelV_V_269::getParams(Energy2 ) {
// }

class FRModelV_V_270: public FFVVertex {
 public:
  FRModelV_V_270() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-6,5,24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
    right(0.0);
    if(p1->id()!=-6) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_270 & operator=(const FRModelV_V_270 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_270,Helicity::FFVVertex>
describeHerwigFRModelV_V_270("Herwig::FRModelV_V_270",
				       "FRModel.so");
// void FRModelV_V_270::getParams(Energy2 ) {
// }

class FRModelV_V_271: public FFVVertex {
 public:
  FRModelV_V_271() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-1,1,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*gw))/2.0)-(((ii*g1)*sw)/6.0))));
    right(((((-ii)*1.0)*1.0)*(((ii*g1)*sw)/3.0)));
    if(p1->id()!=-1) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_271 & operator=(const FRModelV_V_271 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_271,Helicity::FFVVertex>
describeHerwigFRModelV_V_271("Herwig::FRModelV_V_271",
				       "FRModel.so");
// void FRModelV_V_271::getParams(Energy2 ) {
// }

class FRModelV_V_272: public FFVVertex {
 public:
  FRModelV_V_272() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-3,3,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*gw))/2.0)-(((ii*g1)*sw)/6.0))));
    right(((((-ii)*1.0)*1.0)*(((ii*g1)*sw)/3.0)));
    if(p1->id()!=-3) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_272 & operator=(const FRModelV_V_272 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_272,Helicity::FFVVertex>
describeHerwigFRModelV_V_272("Herwig::FRModelV_V_272",
				       "FRModel.so");
// void FRModelV_V_272::getParams(Energy2 ) {
// }

class FRModelV_V_273: public FFVVertex {
 public:
  FRModelV_V_273() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-5,5,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*gw))/2.0)-(((ii*g1)*sw)/6.0))));
    right(((((-ii)*1.0)*1.0)*(((ii*g1)*sw)/3.0)));
    if(p1->id()!=-5) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_273 & operator=(const FRModelV_V_273 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_273,Helicity::FFVVertex>
describeHerwigFRModelV_V_273("Herwig::FRModelV_V_273",
				       "FRModel.so");
// void FRModelV_V_273::getParams(Energy2 ) {
// }

}
