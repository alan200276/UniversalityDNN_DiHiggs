// -*- C++ -*-
//
// FRModel_Vertices_002.cc is a part of Herwig - A multi-purpose Monte Carlo event generator
// Copyright (C) 2002-2007 The Herwig Collaboration
//
// Herwig is licenced under version 2 of the GPL, see COPYING for details.
// Please respect the MCnet academic guidelines, see GUIDELINES for details.

#include "FRModel.h"
#include "ThePEG/Helicity/Vertex/Vector/VVVVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/VSSVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/SSSVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/FFSVertex.h"
#include "ThePEG/Helicity/Vertex/Scalar/SSSSVertex.h"

#include "ThePEG/Utilities/DescribeClass.h"
#include "ThePEG/Persistency/PersistentOStream.h"
#include "ThePEG/Persistency/PersistentIStream.h"

namespace Herwig 
{
  using namespace ThePEG;
  using namespace ThePEG::Helicity;
  using ThePEG::Constants::pi;

  class FRModelV_V_93: public SSSSVertex {
 public:
  FRModelV_V_93() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,25,35,35);
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
    norm((((-ii)*1.0)*((((((((((((((((((-6.0*ii)*l1)*sqr(TH1x1))*sqr(TH1x2))-(((((6.0*ii)*l6)*TH1x1)*sqr(TH1x2))*TH2x1))-(((ii*l3)*sqr(TH1x2))*sqr(TH2x1)))-(((ii*l4)*sqr(TH1x2))*sqr(TH2x1)))-((((2.0*ii)*l5)*sqr(TH1x2))*sqr(TH2x1)))-(((((6.0*ii)*l6)*sqr(TH1x1))*TH1x2)*TH2x2))-((((((4.0*ii)*l3)*TH1x1)*TH1x2)*TH2x1)*TH2x2))-((((((4.0*ii)*l4)*TH1x1)*TH1x2)*TH2x1)*TH2x2))-((((((8.0*ii)*l5)*TH1x1)*TH1x2)*TH2x1)*TH2x2))-(((((6.0*ii)*l7)*TH1x2)*sqr(TH2x1))*TH2x2))-(((ii*l3)*sqr(TH1x1))*sqr(TH2x2)))-(((ii*l4)*sqr(TH1x1))*sqr(TH2x2)))-((((2.0*ii)*l5)*sqr(TH1x1))*sqr(TH2x2)))-(((((6.0*ii)*l7)*TH1x1)*TH2x1)*sqr(TH2x2)))-((((6.0*ii)*l2)*sqr(TH2x1))*sqr(TH2x2)))));
    
    
    
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
  FRModelV_V_93 & operator=(const FRModelV_V_93 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_93,Helicity::SSSSVertex>
describeHerwigFRModelV_V_93("Herwig::FRModelV_V_93",
				       "FRModel.so");
// void FRModelV_V_93::getParams(Energy2 ) {
// }

class FRModelV_V_94: public SSSSVertex {
 public:
  FRModelV_V_94() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,25,36,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double TH2x1 = model_->TH2x1();
    double TH1x1 = model_->TH1x1();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l2 = model_->l2();
    double l3 = model_->l3();
    double TH3x3 = model_->TH3x3();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*(((((-(((ii*l3)*sqr(TH1x1))*sqr(TH3x3)))-(((ii*l4)*sqr(TH1x1))*sqr(TH3x3)))+((((2.0*ii)*l5)*sqr(TH1x1))*sqr(TH3x3)))-(((((2.0*ii)*l7)*TH1x1)*TH2x1)*sqr(TH3x3)))-((((2.0*ii)*l2)*sqr(TH2x1))*sqr(TH3x3)))));
    
    
    
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
  FRModelV_V_94 & operator=(const FRModelV_V_94 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_94,Helicity::SSSSVertex>
describeHerwigFRModelV_V_94("Herwig::FRModelV_V_94",
				       "FRModel.so");
// void FRModelV_V_94::getParams(Energy2 ) {
// }

class FRModelV_V_95: public SSSSVertex {
 public:
  FRModelV_V_95() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,35,35,35);
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
    norm((((-ii)*1.0)*(((((((((((((((-6.0*ii)*l1)*TH1x1)*pow(TH1x2,3.0))-((((3.0*ii)*l6)*pow(TH1x2,3.0))*TH2x1))-(((((9.0*ii)*l6)*TH1x1)*sqr(TH1x2))*TH2x2))-(((((3.0*ii)*l3)*sqr(TH1x2))*TH2x1)*TH2x2))-(((((3.0*ii)*l4)*sqr(TH1x2))*TH2x1)*TH2x2))-(((((6.0*ii)*l5)*sqr(TH1x2))*TH2x1)*TH2x2))-(((((3.0*ii)*l3)*TH1x1)*TH1x2)*sqr(TH2x2)))-(((((3.0*ii)*l4)*TH1x1)*TH1x2)*sqr(TH2x2)))-(((((6.0*ii)*l5)*TH1x1)*TH1x2)*sqr(TH2x2)))-(((((9.0*ii)*l7)*TH1x2)*TH2x1)*sqr(TH2x2)))-((((3.0*ii)*l7)*TH1x1)*pow(TH2x2,3.0)))-((((6.0*ii)*l2)*TH2x1)*pow(TH2x2,3.0)))));
    
    
    
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
  FRModelV_V_95 & operator=(const FRModelV_V_95 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_95,Helicity::SSSSVertex>
describeHerwigFRModelV_V_95("Herwig::FRModelV_V_95",
				       "FRModel.so");
// void FRModelV_V_95::getParams(Energy2 ) {
// }

class FRModelV_V_96: public SSSSVertex {
 public:
  FRModelV_V_96() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,35,36,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double TH2x2 = model_->TH2x2();
    double TH2x1 = model_->TH2x1();
    double TH1x1 = model_->TH1x1();
    double TH1x2 = model_->TH1x2();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l2 = model_->l2();
    double l3 = model_->l3();
    double TH3x3 = model_->TH3x3();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*((((((-((((ii*l3)*TH1x1)*TH1x2)*sqr(TH3x3)))-((((ii*l4)*TH1x1)*TH1x2)*sqr(TH3x3)))+(((((2.0*ii)*l5)*TH1x1)*TH1x2)*sqr(TH3x3)))-((((ii*l7)*TH1x2)*TH2x1)*sqr(TH3x3)))-((((ii*l7)*TH1x1)*TH2x2)*sqr(TH3x3)))-(((((2.0*ii)*l2)*TH2x1)*TH2x2)*sqr(TH3x3)))));
    
    
    
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
  FRModelV_V_96 & operator=(const FRModelV_V_96 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_96,Helicity::SSSSVertex>
describeHerwigFRModelV_V_96("Herwig::FRModelV_V_96",
				       "FRModel.so");
// void FRModelV_V_96::getParams(Energy2 ) {
// }

class FRModelV_V_97: public SSSSVertex {
 public:
  FRModelV_V_97() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(35,35,35,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double TH2x2 = model_->TH2x2();
    double TH1x2 = model_->TH1x2();
    Complex l6 = model_->l6();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l2 = model_->l2();
    double l3 = model_->l3();
    double l1 = model_->l1();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*(((((((((-6.0*ii)*l1)*pow(TH1x2,4.0))-((((12.0*ii)*l6)*pow(TH1x2,3.0))*TH2x2))-((((6.0*ii)*l3)*sqr(TH1x2))*sqr(TH2x2)))-((((6.0*ii)*l4)*sqr(TH1x2))*sqr(TH2x2)))-((((12.0*ii)*l5)*sqr(TH1x2))*sqr(TH2x2)))-((((12.0*ii)*l7)*TH1x2)*pow(TH2x2,3.0)))-(((6.0*ii)*l2)*pow(TH2x2,4.0)))));
    
    
    
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
  FRModelV_V_97 & operator=(const FRModelV_V_97 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_97,Helicity::SSSSVertex>
describeHerwigFRModelV_V_97("Herwig::FRModelV_V_97",
				       "FRModel.so");
// void FRModelV_V_97::getParams(Energy2 ) {
// }

class FRModelV_V_98: public SSSSVertex {
 public:
  FRModelV_V_98() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(35,35,36,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double TH2x2 = model_->TH2x2();
    double TH3x3 = model_->TH3x3();
    double TH1x2 = model_->TH1x2();
    Complex l7 = model_->l7();
    double l4 = model_->l4();
    Complex l5 = model_->l5();
    double l2 = model_->l2();
    double l3 = model_->l3();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*(((((-(((ii*l3)*sqr(TH1x2))*sqr(TH3x3)))-(((ii*l4)*sqr(TH1x2))*sqr(TH3x3)))+((((2.0*ii)*l5)*sqr(TH1x2))*sqr(TH3x3)))-(((((2.0*ii)*l7)*TH1x2)*TH2x2)*sqr(TH3x3)))-((((2.0*ii)*l2)*sqr(TH2x2))*sqr(TH3x3)))));
    
    
    
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
  FRModelV_V_98 & operator=(const FRModelV_V_98 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_98,Helicity::SSSSVertex>
describeHerwigFRModelV_V_98("Herwig::FRModelV_V_98",
				       "FRModel.so");
// void FRModelV_V_98::getParams(Energy2 ) {
// }

class FRModelV_V_99: public SSSSVertex {
 public:
  FRModelV_V_99() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(36,36,36,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double TH3x3 = model_->TH3x3();
    double l2 = model_->l2();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*(((-6.0*ii)*l2)*pow(TH3x3,4.0))));
    
    
    
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
  FRModelV_V_99 & operator=(const FRModelV_V_99 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_99,Helicity::SSSSVertex>
describeHerwigFRModelV_V_99("Herwig::FRModelV_V_99",
				       "FRModel.so");
// void FRModelV_V_99::getParams(Energy2 ) {
// }

class FRModelV_V_125: public SSSVertex {
 public:
  FRModelV_V_125() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH1x1 = model_->TH1x1();
    double TH2x1 = model_->TH2x1();
    double l3 = model_->l3();
    Complex l7 = model_->l7();
    
    //    getParams(q2);
    norm(Complex(((((-ii)*1.0)*((-(((ii*l3)*TH1x1)*vev))-(((ii*l7)*TH2x1)*vev)))) * GeV / UnitRemoval::E));
    
    
    
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
  FRModelV_V_125 & operator=(const FRModelV_V_125 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_125,Helicity::SSSVertex>
describeHerwigFRModelV_V_125("Herwig::FRModelV_V_125",
				       "FRModel.so");
// void FRModelV_V_125::getParams(Energy2 ) {
// }

class FRModelV_V_126: public SSSVertex {
 public:
  FRModelV_V_126() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(35,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    Complex l7 = model_->l7();
    double TH1x2 = model_->TH1x2();
    double l3 = model_->l3();
    double TH2x2 = model_->TH2x2();
    
    //    getParams(q2);
    norm(Complex(((((-ii)*1.0)*((-(((ii*l3)*TH1x2)*vev))-(((ii*l7)*TH2x2)*vev)))) * GeV / UnitRemoval::E));
    
    
    
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
  FRModelV_V_126 & operator=(const FRModelV_V_126 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_126,Helicity::SSSVertex>
describeHerwigFRModelV_V_126("Herwig::FRModelV_V_126",
				       "FRModel.so");
// void FRModelV_V_126::getParams(Energy2 ) {
// }

class FRModelV_V_127: public SSSSVertex {
 public:
  FRModelV_V_127() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,25,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double TH1x1 = model_->TH1x1();
    double TH2x1 = model_->TH2x1();
    double l2 = model_->l2();
    double l3 = model_->l3();
    Complex l7 = model_->l7();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*(((-((ii*l3)*sqr(TH1x1)))-((((2.0*ii)*l7)*TH1x1)*TH2x1))-(((2.0*ii)*l2)*sqr(TH2x1)))));
    
    
    
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
  FRModelV_V_127 & operator=(const FRModelV_V_127 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_127,Helicity::SSSSVertex>
describeHerwigFRModelV_V_127("Herwig::FRModelV_V_127",
				       "FRModel.so");
// void FRModelV_V_127::getParams(Energy2 ) {
// }

class FRModelV_V_128: public SSSSVertex {
 public:
  FRModelV_V_128() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(25,35,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double TH2x2 = model_->TH2x2();
    double TH2x1 = model_->TH2x1();
    double l2 = model_->l2();
    double l3 = model_->l3();
    Complex l7 = model_->l7();
    double TH1x1 = model_->TH1x1();
    double TH1x2 = model_->TH1x2();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*((((-(((ii*l3)*TH1x1)*TH1x2))-(((ii*l7)*TH1x2)*TH2x1))-(((ii*l7)*TH1x1)*TH2x2))-((((2.0*ii)*l2)*TH2x1)*TH2x2))));
    
    
    
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
  FRModelV_V_128 & operator=(const FRModelV_V_128 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_128,Helicity::SSSSVertex>
describeHerwigFRModelV_V_128("Herwig::FRModelV_V_128",
				       "FRModel.so");
// void FRModelV_V_128::getParams(Energy2 ) {
// }

class FRModelV_V_129: public SSSSVertex {
 public:
  FRModelV_V_129() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(35,35,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    Complex l7 = model_->l7();
    double TH1x2 = model_->TH1x2();
    double l2 = model_->l2();
    double l3 = model_->l3();
    double TH2x2 = model_->TH2x2();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*(((-((ii*l3)*sqr(TH1x2)))-((((2.0*ii)*l7)*TH1x2)*TH2x2))-(((2.0*ii)*l2)*sqr(TH2x2)))));
    
    
    
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
  FRModelV_V_129 & operator=(const FRModelV_V_129 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_129,Helicity::SSSSVertex>
describeHerwigFRModelV_V_129("Herwig::FRModelV_V_129",
				       "FRModel.so");
// void FRModelV_V_129::getParams(Energy2 ) {
// }

class FRModelV_V_130: public SSSSVertex {
 public:
  FRModelV_V_130() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(36,36,-37,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr,tcPDPtr) {
    double TH3x3 = model_->TH3x3();
    double l2 = model_->l2();
    
    //    getParams(q2);
    norm((((-ii)*1.0)*(((-2.0*ii)*l2)*sqr(TH3x3))));
    
    
    
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
  FRModelV_V_130 & operator=(const FRModelV_V_130 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_130,Helicity::SSSSVertex>
describeHerwigFRModelV_V_130("Herwig::FRModelV_V_130",
				       "FRModel.so");
// void FRModelV_V_130::getParams(Energy2 ) {
// }

class FRModelV_V_131: public FFSVertex {
 public:
  FRModelV_V_131() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-6,6,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x1 = model_->TH2x1();
    double ymt = model_->ymt();
    double TH1x1 = model_->TH1x1();
    double tanbeta = model_->tanbeta();
    double yt = model_->yt();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((ii*TH2x1)*ymt)/(tanbeta*vev))-(((ii*TH1x1)*yt)/sqrt(2.0)))));
    right(((((-ii)*1.0)*1.0)*((((ii*TH2x1)*ymt)/(tanbeta*vev))-(((ii*TH1x1)*yt)/sqrt(2.0)))));
    
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
  FRModelV_V_131 & operator=(const FRModelV_V_131 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_131,Helicity::FFSVertex>
describeHerwigFRModelV_V_131("Herwig::FRModelV_V_131",
				       "FRModel.so");
// void FRModelV_V_131::getParams(Energy2 ) {
// }

class FRModelV_V_132: public FFSVertex {
 public:
  FRModelV_V_132() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-6,6,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x2 = model_->TH2x2();
    double ymt = model_->ymt();
    double TH1x2 = model_->TH1x2();
    double tanbeta = model_->tanbeta();
    double yt = model_->yt();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((((ii*TH2x2)*ymt)/(tanbeta*vev))-(((ii*TH1x2)*yt)/sqrt(2.0)))));
    right(((((-ii)*1.0)*1.0)*((((ii*TH2x2)*ymt)/(tanbeta*vev))-(((ii*TH1x2)*yt)/sqrt(2.0)))));
    
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
  FRModelV_V_132 & operator=(const FRModelV_V_132 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_132,Helicity::FFSVertex>
describeHerwigFRModelV_V_132("Herwig::FRModelV_V_132",
				       "FRModel.so");
// void FRModelV_V_132::getParams(Energy2 ) {
// }

class FRModelV_V_133: public FFSVertex {
 public:
  FRModelV_V_133() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-6,6,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double ymt = model_->ymt();
    double TH3x3 = model_->TH3x3();
    double tanbeta = model_->tanbeta();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(-((TH3x3*ymt)/(tanbeta*vev)))));
    right(((((-ii)*1.0)*-1.0)*(-((TH3x3*ymt)/(tanbeta*vev)))));
    
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
  FRModelV_V_133 & operator=(const FRModelV_V_133 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_133,Helicity::FFSVertex>
describeHerwigFRModelV_V_133("Herwig::FRModelV_V_133",
				       "FRModel.so");
// void FRModelV_V_133::getParams(Energy2 ) {
// }

class FRModelV_V_134: public FFSVertex {
 public:
  FRModelV_V_134() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-5,5,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x1 = model_->TH2x1();
    double TH1x1 = model_->TH1x1();
    double yb = model_->yb();
    double tanbeta = model_->tanbeta();
    double ymb = model_->ymb();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((-((((ii*tanbeta)*TH2x1)*ymb)/vev))-(((ii*TH1x1)*yb)/sqrt(2.0)))));
    right(((((-ii)*1.0)*1.0)*((-((((ii*tanbeta)*TH2x1)*ymb)/vev))-(((ii*TH1x1)*yb)/sqrt(2.0)))));
    
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
  FRModelV_V_134 & operator=(const FRModelV_V_134 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_134,Helicity::FFSVertex>
describeHerwigFRModelV_V_134("Herwig::FRModelV_V_134",
				       "FRModel.so");
// void FRModelV_V_134::getParams(Energy2 ) {
// }

class FRModelV_V_135: public FFSVertex {
 public:
  FRModelV_V_135() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-5,5,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x2 = model_->TH2x2();
    double TH1x2 = model_->TH1x2();
    double yb = model_->yb();
    double tanbeta = model_->tanbeta();
    double ymb = model_->ymb();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((-((((ii*tanbeta)*TH2x2)*ymb)/vev))-(((ii*TH1x2)*yb)/sqrt(2.0)))));
    right(((((-ii)*1.0)*1.0)*((-((((ii*tanbeta)*TH2x2)*ymb)/vev))-(((ii*TH1x2)*yb)/sqrt(2.0)))));
    
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
  FRModelV_V_135 & operator=(const FRModelV_V_135 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_135,Helicity::FFSVertex>
describeHerwigFRModelV_V_135("Herwig::FRModelV_V_135",
				       "FRModel.so");
// void FRModelV_V_135::getParams(Energy2 ) {
// }

class FRModelV_V_136: public FFSVertex {
 public:
  FRModelV_V_136() {
    
    colourStructure(ColourStructure::DELTA);
    addToList(-5,5,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH3x3 = model_->TH3x3();
    double tanbeta = model_->tanbeta();
    double ymb = model_->ymb();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(-(((tanbeta*TH3x3)*ymb)/vev))));
    right(((((-ii)*1.0)*-1.0)*(-(((tanbeta*TH3x3)*ymb)/vev))));
    
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
  FRModelV_V_136 & operator=(const FRModelV_V_136 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_136,Helicity::FFSVertex>
describeHerwigFRModelV_V_136("Herwig::FRModelV_V_136",
				       "FRModel.so");
// void FRModelV_V_136::getParams(Energy2 ) {
// }

class FRModelV_V_137: public FFSVertex {
 public:
  FRModelV_V_137() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-15,15,25);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x1 = model_->TH2x1();
    double ytau = model_->ytau();
    double TH1x1 = model_->TH1x1();
    double tanbeta = model_->tanbeta();
    double ymtau = model_->ymtau();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((-((((ii*tanbeta)*TH2x1)*ymtau)/vev))-(((ii*TH1x1)*ytau)/sqrt(2.0)))));
    right(((((-ii)*1.0)*1.0)*((-((((ii*tanbeta)*TH2x1)*ymtau)/vev))-(((ii*TH1x1)*ytau)/sqrt(2.0)))));
    
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
  FRModelV_V_137 & operator=(const FRModelV_V_137 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_137,Helicity::FFSVertex>
describeHerwigFRModelV_V_137("Herwig::FRModelV_V_137",
				       "FRModel.so");
// void FRModelV_V_137::getParams(Energy2 ) {
// }

class FRModelV_V_138: public FFSVertex {
 public:
  FRModelV_V_138() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-15,15,35);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH2x2 = model_->TH2x2();
    double ytau = model_->ytau();
    double ymtau = model_->ymtau();
    double TH1x2 = model_->TH1x2();
    double tanbeta = model_->tanbeta();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*((-((((ii*tanbeta)*TH2x2)*ymtau)/vev))-(((ii*TH1x2)*ytau)/sqrt(2.0)))));
    right(((((-ii)*1.0)*1.0)*((-((((ii*tanbeta)*TH2x2)*ymtau)/vev))-(((ii*TH1x2)*ytau)/sqrt(2.0)))));
    
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
  FRModelV_V_138 & operator=(const FRModelV_V_138 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_138,Helicity::FFSVertex>
describeHerwigFRModelV_V_138("Herwig::FRModelV_V_138",
				       "FRModel.so");
// void FRModelV_V_138::getParams(Energy2 ) {
// }

class FRModelV_V_139: public FFSVertex {
 public:
  FRModelV_V_139() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-15,15,36);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr,tcPDPtr) {
    double vev = model_->vev();
    double TH3x3 = model_->TH3x3();
    double tanbeta = model_->tanbeta();
    double ymtau = model_->ymtau();
    
    //    getParams(q2);
    norm(1.0);
    left(((((-ii)*1.0)*1.0)*(-(((tanbeta*TH3x3)*ymtau)/vev))));
    right(((((-ii)*1.0)*-1.0)*(-(((tanbeta*TH3x3)*ymtau)/vev))));
    
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
  FRModelV_V_139 & operator=(const FRModelV_V_139 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_139,Helicity::FFSVertex>
describeHerwigFRModelV_V_139("Herwig::FRModelV_V_139",
				       "FRModel.so");
// void FRModelV_V_139::getParams(Energy2 ) {
// }

class FRModelV_V_155: public VVVVertex {
 public:
  FRModelV_V_155() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(22,-24,24);
  }
  void setCoupling(Energy2 ,tcPDPtr p1,tcPDPtr p2,tcPDPtr p3) {
    double gw = model_->gw();
    double sw = model_->sw();
    
    //    getParams(q2);
    norm(((ii*1.0)*((ii*gw)*sw)));
    
    
    if((p1->id()==-24&&p2->id()==22&&p3->id()==24)||(p1->id()==22&&p2->id()==24&&p3->id()==-24)||(p1->id()==24&&p2->id()==-24&&p3->id()==22)) {norm(-norm());}
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
  FRModelV_V_155 & operator=(const FRModelV_V_155 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_155,Helicity::VVVVertex>
describeHerwigFRModelV_V_155("Herwig::FRModelV_V_155",
				       "FRModel.so");
// void FRModelV_V_155::getParams(Energy2 ) {
// }

class FRModelV_V_160: public VSSVertex {
 public:
  FRModelV_V_160() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,25,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double TH2x1 = model_->TH2x1();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((-((ii*gw)*TH2x1))/2.0))*1.0));
    
    
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
  FRModelV_V_160 & operator=(const FRModelV_V_160 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_160,Helicity::VSSVertex>
describeHerwigFRModelV_V_160("Herwig::FRModelV_V_160",
				       "FRModel.so");
// void FRModelV_V_160::getParams(Energy2 ) {
// }

class FRModelV_V_161: public VSSVertex {
 public:
  FRModelV_V_161() {
    
    colourStructure(ColourStructure::SINGLET);
    addToList(-24,35,37);
  }
  void setCoupling(Energy2 ,tcPDPtr,tcPDPtr p2,tcPDPtr) {
    double gw = model_->gw();
    double TH2x2 = model_->TH2x2();
    
    //    getParams(q2);
    norm(((((-ii)*1.0)*((-((ii*gw)*TH2x2))/2.0))*1.0));
    
    
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
  FRModelV_V_161 & operator=(const FRModelV_V_161 &) = delete;
  //    Complex leftval, rightval, normval;
  tcHwFRModelPtr model_;
};
DescribeClass<FRModelV_V_161,Helicity::VSSVertex>
describeHerwigFRModelV_V_161("Herwig::FRModelV_V_161",
				       "FRModel.so");
// void FRModelV_V_161::getParams(Energy2 ) {
// }

}
