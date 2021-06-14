// -*- C++ -*-
//
// FRModel_Vertices_005.cc is a part of Herwig - A multi-purpose Monte Carlo event generator
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

  class FRModelV_V_237: public FFVVertex {
 public:
  FRModelV_V_237() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-15,16,-24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
    right(0.0);
    if(p1->id()!=-15) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_237 & operator=(const FRModelV_V_237 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_237,Helicity::FFVVertex>
describeHerwigFRModelV_V_237("Herwig::FRModelV_V_237",
				       "FRModel.so");
// void FRModelV_V_237::getParams(Energy2 ) {
// }

class FRModelV_V_238: public FFVVertex {
 public:
  FRModelV_V_238() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-12,12,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*gw)/2.0)+(((ii*g1)*sw)/2.0))));
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
  FRModelV_V_238 & operator=(const FRModelV_V_238 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_238,Helicity::FFVVertex>
describeHerwigFRModelV_V_238("Herwig::FRModelV_V_238",
				       "FRModel.so");
// void FRModelV_V_238::getParams(Energy2 ) {
// }

class FRModelV_V_239: public FFVVertex {
 public:
  FRModelV_V_239() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-14,14,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*gw)/2.0)+(((ii*g1)*sw)/2.0))));
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
  FRModelV_V_239 & operator=(const FRModelV_V_239 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_239,Helicity::FFVVertex>
describeHerwigFRModelV_V_239("Herwig::FRModelV_V_239",
				       "FRModel.so");
// void FRModelV_V_239::getParams(Energy2 ) {
// }

class FRModelV_V_240: public FFVVertex {
 public:
  FRModelV_V_240() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-16,16,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double cw = model_->cw();
    double sw = model_->sw();
    double g1 = model_->g1();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*gw)/2.0)+(((ii*g1)*sw)/2.0))));
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
  FRModelV_V_240 & operator=(const FRModelV_V_240 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_240,Helicity::FFVVertex>
describeHerwigFRModelV_V_240("Herwig::FRModelV_V_240",
				       "FRModel.so");
// void FRModelV_V_240::getParams(Energy2 ) {
// }

class FRModelV_V_241: public FFVVertex {
 public:
  FRModelV_V_241() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-11,11,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*g1))/2.0)-(((ii*gw)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*(-((cw*ii)*g1))));
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
  FRModelV_V_241 & operator=(const FRModelV_V_241 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_241,Helicity::FFVVertex>
describeHerwigFRModelV_V_241("Herwig::FRModelV_V_241",
				       "FRModel.so");
// void FRModelV_V_241::getParams(Energy2 ) {
// }

class FRModelV_V_242: public FFVVertex {
 public:
  FRModelV_V_242() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-13,13,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*g1))/2.0)-(((ii*gw)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*(-((cw*ii)*g1))));
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
  FRModelV_V_242 & operator=(const FRModelV_V_242 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_242,Helicity::FFVVertex>
describeHerwigFRModelV_V_242("Herwig::FRModelV_V_242",
				       "FRModel.so");
// void FRModelV_V_242::getParams(Energy2 ) {
// }

class FRModelV_V_243: public FFVVertex {
 public:
  FRModelV_V_243() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-15,15,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*g1))/2.0)-(((ii*gw)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*(-((cw*ii)*g1))));
    if(p1->id()!=-15) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_243 & operator=(const FRModelV_V_243 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_243,Helicity::FFVVertex>
describeHerwigFRModelV_V_243("Herwig::FRModelV_V_243",
				       "FRModel.so");
// void FRModelV_V_243::getParams(Energy2 ) {
// }

class FRModelV_V_244: public FFVVertex {
 public:
  FRModelV_V_244() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-12,11,24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
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
  FRModelV_V_244 & operator=(const FRModelV_V_244 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_244,Helicity::FFVVertex>
describeHerwigFRModelV_V_244("Herwig::FRModelV_V_244",
				       "FRModel.so");
// void FRModelV_V_244::getParams(Energy2 ) {
// }

class FRModelV_V_245: public FFVVertex {
 public:
  FRModelV_V_245() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-14,13,24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
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
  FRModelV_V_245 & operator=(const FRModelV_V_245 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_245,Helicity::FFVVertex>
describeHerwigFRModelV_V_245("Herwig::FRModelV_V_245",
				       "FRModel.so");
// void FRModelV_V_245::getParams(Energy2 ) {
// }

class FRModelV_V_246: public FFVVertex {
 public:
  FRModelV_V_246() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-16,15,24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
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
  FRModelV_V_246 & operator=(const FRModelV_V_246 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_246,Helicity::FFVVertex>
describeHerwigFRModelV_V_246("Herwig::FRModelV_V_246",
				       "FRModel.so");
// void FRModelV_V_246::getParams(Energy2 ) {
// }

class FRModelV_V_247: public FFVVertex {
 public:
  FRModelV_V_247() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-11,11,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*gw))/2.0)+(((ii*g1)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*((ii*g1)*sw)));
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
  FRModelV_V_247 & operator=(const FRModelV_V_247 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_247,Helicity::FFVVertex>
describeHerwigFRModelV_V_247("Herwig::FRModelV_V_247",
				       "FRModel.so");
// void FRModelV_V_247::getParams(Energy2 ) {
// }

class FRModelV_V_248: public FFVVertex {
 public:
  FRModelV_V_248() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-13,13,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*gw))/2.0)+(((ii*g1)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*((ii*g1)*sw)));
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
  FRModelV_V_248 & operator=(const FRModelV_V_248 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_248,Helicity::FFVVertex>
describeHerwigFRModelV_V_248("Herwig::FRModelV_V_248",
				       "FRModel.so");
// void FRModelV_V_248::getParams(Energy2 ) {
// }

class FRModelV_V_249: public FFVVertex {
 public:
  FRModelV_V_249() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-15,15,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(((-((cw*ii)*gw))/2.0)+(((ii*g1)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*((ii*g1)*sw)));
    if(p1->id()!=-15) {Complex ltemp=left(), rtemp=right(); left(-rtemp); right(-ltemp);}
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
  FRModelV_V_249 & operator=(const FRModelV_V_249 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_249,Helicity::FFVVertex>
describeHerwigFRModelV_V_249("Herwig::FRModelV_V_249",
				       "FRModel.so");
// void FRModelV_V_249::getParams(Energy2 ) {
// }

class FRModelV_V_250: public FFVVertex {
 public:
  FRModelV_V_250() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-2,2,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*g1)/6.0)+(((ii*gw)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*((((2.0*cw)*ii)*g1)/3.0)));
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
  FRModelV_V_250 & operator=(const FRModelV_V_250 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_250,Helicity::FFVVertex>
describeHerwigFRModelV_V_250("Herwig::FRModelV_V_250",
				       "FRModel.so");
// void FRModelV_V_250::getParams(Energy2 ) {
// }

class FRModelV_V_251: public FFVVertex {
 public:
  FRModelV_V_251() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-4,4,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*g1)/6.0)+(((ii*gw)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*((((2.0*cw)*ii)*g1)/3.0)));
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
  FRModelV_V_251 & operator=(const FRModelV_V_251 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_251,Helicity::FFVVertex>
describeHerwigFRModelV_V_251("Herwig::FRModelV_V_251",
				       "FRModel.so");
// void FRModelV_V_251::getParams(Energy2 ) {
// }

class FRModelV_V_252: public FFVVertex {
 public:
  FRModelV_V_252() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-6,6,22);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*g1)/6.0)+(((ii*gw)*sw)/2.0))));
    right(((((-ii)*1.0)*1.0)*((((2.0*cw)*ii)*g1)/3.0)));
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
  FRModelV_V_252 & operator=(const FRModelV_V_252 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_252,Helicity::FFVVertex>
describeHerwigFRModelV_V_252("Herwig::FRModelV_V_252",
				       "FRModel.so");
// void FRModelV_V_252::getParams(Energy2 ) {
// }

class FRModelV_V_253: public FFVVertex {
 public:
  FRModelV_V_253() {
    
    colourStructure(ColourStructure::SU3TFUND);
    addToList(-2,2,21);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double G = model_->G();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(ii*G)));
    right(((((-ii)*1.0)*1.0)*(ii*G)));
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
    
        orderInCoupling(CouplingType::QED,0);
    orderInCoupling(CouplingType::QCD,1);

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_253 & operator=(const FRModelV_V_253 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_253,Helicity::FFVVertex>
describeHerwigFRModelV_V_253("Herwig::FRModelV_V_253",
				       "FRModel.so");
// void FRModelV_V_253::getParams(Energy2 ) {
// }

class FRModelV_V_254: public FFVVertex {
 public:
  FRModelV_V_254() {
    
    colourStructure(ColourStructure::SU3TFUND);
    addToList(-4,4,21);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double G = model_->G();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(ii*G)));
    right(((((-ii)*1.0)*1.0)*(ii*G)));
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
    
        orderInCoupling(CouplingType::QED,0);
    orderInCoupling(CouplingType::QCD,1);

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_254 & operator=(const FRModelV_V_254 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_254,Helicity::FFVVertex>
describeHerwigFRModelV_V_254("Herwig::FRModelV_V_254",
				       "FRModel.so");
// void FRModelV_V_254::getParams(Energy2 ) {
// }

class FRModelV_V_255: public FFVVertex {
 public:
  FRModelV_V_255() {
    
    colourStructure(ColourStructure::SU3TFUND);
    addToList(-6,6,21);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double G = model_->G();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(ii*G)));
    right(((((-ii)*1.0)*1.0)*(ii*G)));
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
    
        orderInCoupling(CouplingType::QED,0);
    orderInCoupling(CouplingType::QCD,1);

    FFVVertex::doinit();
  }
  //    void getParams(Energy2);
 private:
  FRModelV_V_255 & operator=(const FRModelV_V_255 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_255,Helicity::FFVVertex>
describeHerwigFRModelV_V_255("Herwig::FRModelV_V_255",
				       "FRModel.so");
// void FRModelV_V_255::getParams(Energy2 ) {
// }

class FRModelV_V_256: public FFVVertex {
 public:
  FRModelV_V_256() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-1,2,-24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
    right(0.0);
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
  FRModelV_V_256 & operator=(const FRModelV_V_256 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_256,Helicity::FFVVertex>
describeHerwigFRModelV_V_256("Herwig::FRModelV_V_256",
				       "FRModel.so");
// void FRModelV_V_256::getParams(Energy2 ) {
// }

class FRModelV_V_257: public FFVVertex {
 public:
  FRModelV_V_257() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-3,4,-24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
    right(0.0);
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
  FRModelV_V_257 & operator=(const FRModelV_V_257 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_257,Helicity::FFVVertex>
describeHerwigFRModelV_V_257("Herwig::FRModelV_V_257",
				       "FRModel.so");
// void FRModelV_V_257::getParams(Energy2 ) {
// }

class FRModelV_V_258: public FFVVertex {
 public:
  FRModelV_V_258() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-5,6,-24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((ii*gw)/sqrt(2.0))));
    right(0.0);
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
  FRModelV_V_258 & operator=(const FRModelV_V_258 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_258,Helicity::FFVVertex>
describeHerwigFRModelV_V_258("Herwig::FRModelV_V_258",
				       "FRModel.so");
// void FRModelV_V_258::getParams(Energy2 ) {
// }

class FRModelV_V_259: public FFVVertex {
 public:
  FRModelV_V_259() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-2,2,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*gw)/2.0)-(((ii*g1)*sw)/6.0))));
    right(((((-ii)*1.0)*1.0)*((((-2.0*ii)*g1)*sw)/3.0)));
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
  FRModelV_V_259 & operator=(const FRModelV_V_259 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_259,Helicity::FFVVertex>
describeHerwigFRModelV_V_259("Herwig::FRModelV_V_259",
				       "FRModel.so");
// void FRModelV_V_259::getParams(Energy2 ) {
// }

class FRModelV_V_260: public FFVVertex {
 public:
  FRModelV_V_260() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-4,4,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*gw)/2.0)-(((ii*g1)*sw)/6.0))));
    right(((((-ii)*1.0)*1.0)*((((-2.0*ii)*g1)*sw)/3.0)));
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
  FRModelV_V_260 & operator=(const FRModelV_V_260 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_260,Helicity::FFVVertex>
describeHerwigFRModelV_V_260("Herwig::FRModelV_V_260",
				       "FRModel.so");
// void FRModelV_V_260::getParams(Energy2 ) {
// }

class FRModelV_V_261: public FFVVertex {
 public:
  FRModelV_V_261() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-6,6,23);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr,tcPDPtr) {
    double gw = model_->gw();
    double g1 = model_->g1();
    double sw = model_->sw();
    double cw = model_->cw();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((cw*ii)*gw)/2.0)-(((ii*g1)*sw)/6.0))));
    right(((((-ii)*1.0)*1.0)*((((-2.0*ii)*g1)*sw)/3.0)));
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
  FRModelV_V_261 & operator=(const FRModelV_V_261 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_261,Helicity::FFVVertex>
describeHerwigFRModelV_V_261("Herwig::FRModelV_V_261",
				       "FRModel.so");
// void FRModelV_V_261::getParams(Energy2 ) {
// }

}
