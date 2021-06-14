// -*- C++ -*-
//
// FRModel.h is a part of Herwig - A multi-purpose Monte Carlo event generator
// Copyright (C) 2002-2013 The Herwig Collaboration
//
// Herwig is licenced under version 2 of the GPL, see COPYING for details.
// Please respect the MCnet academic guidelines, see GUIDELINES for details.
//
#ifndef HERWIG_FRModel_H
#define HERWIG_FRModel_H

// This is the declaration of the FRModel class.
#include "Herwig/Models/General/BSMModel.h"



namespace Herwig {
using namespace ThePEG;
using ThePEG::Constants::pi;

const Complex ii = Complex(0,1);

/** \ingroup Models
 *  
 *  This is the Herwig FRModel class which inherits from ThePEG 
 *  FeynRules Model class and implements additional FeynRules Model couplings, 
 *  access to vertices for helicity amplitude calculations etc.
 *
 *  @see BSMModel
 */
class FRModel: public BSMModel {

public:
  /// Default constructor
  FRModel();

public:

  /** @name Functions used by the persistent I/O system. */
  //@{
  /**
   * Function used to write out object persistently.
   * @param os the persistent output stream written to.
   */
  void persistentOutput(PersistentOStream & os) const;

  /**
   * Function used to read in object persistently.
   * @param is the persistent input stream read from.
   * @param version the version number of the object when written.
   */
  void persistentInput(PersistentIStream & is, int version);
  //@}

  /**
   * Write out a UFO param_card.dat that matches the configured values
   */
  void writeParamCard() const;

  /**
   * Standard Init function used to initialize the interfaces.
   */
  static void Init();

protected:
  virtual bool registerDefaultVertices() const { return false; }

public:

  /**
   * Pointers to the objects handling the vertices.
   */
  //@{


  double ZERO() const { return ZERO_; }
  double MU_R() const { return MU_R_; }
  double l2() const { return l2_; }
  double l3() const { return l3_; }
  double lR7() const { return lR7_; }
  double aEWM1() const { return aEWM1_; }
  double Gf() const { return Gf_; }
  double aS() const { return aS_; }
  double ymb() const { return ymb_; }
  double ymt() const { return ymt_; }
  double ymtau() const { return ymtau_; }
  double tanbeta() const { return tanbeta_; }
  double sinbma() const { return sinbma_; }
  double MZ() const { return MZ_; }
  double MT() const { return MT_; }
  double MB() const { return MB_; }
  double mhc() const { return mhc_; }
  double mh1() const { return mh1_; }
  double mh2() const { return mh2_; }
  double mh3() const { return mh3_; }
  double WZ() const { return WZ_; }
  double WW() const { return WW_; }
  double WT() const { return WT_; }
  double whc() const { return whc_; }
  double Wh1() const { return Wh1_; }
  double Wh2() const { return Wh2_; }
  double Wh3() const { return Wh3_; }
  double TH1x1() const { return TH1x1_; }
  double TH1x2() const { return TH1x2_; }
  double TH2x1() const { return TH2x1_; }
  double TH2x2() const { return TH2x2_; }
  double TH3x3() const { return TH3x3_; }
  double aEW() const { return aEW_; }
  double G() const { return G_; }
  Complex l7() const { return l7_; }
  double lI5() const { return lI5_; }
  double lI6() const { return lI6_; }
  double MW() const { return MW_; }
  double ee() const { return ee_; }
  double sw2() const { return sw2_; }
  double cw() const { return cw_; }
  double sw() const { return sw_; }
  double g1() const { return g1_; }
  double gw() const { return gw_; }
  double vev() const { return vev_; }
  double mu2() const { return mu2_; }
  double l1() const { return l1_; }
  double l4() const { return l4_; }
  double lR5() const { return lR5_; }
  double lR6() const { return lR6_; }
  double yb() const { return yb_; }
  double yt() const { return yt_; }
  double ytau() const { return ytau_; }
  double mu1() const { return mu1_; }
  Complex l5() const { return l5_; }
  Complex l6() const { return l6_; }
  Complex mu3() const { return mu3_; }
  Complex I1a33() const { return I1a33_; }
  Complex I2a33() const { return I2a33_; }
  Complex I3a33() const { return I3a33_; }
  Complex I4a33() const { return I4a33_; }
  Complex I5a33() const { return I5a33_; }
  Complex I6a33() const { return I6a33_; }
  Complex I7a33() const { return I7a33_; }
  Complex I8a33() const { return I8a33_; }

  //@}  
  
protected:
  
  /** @name Clone Methods. */
  //@{
  /**
   * Make a simple clone of this object.
   * @return a pointer to the new object.
   */
  virtual IBPtr clone() const;

  /** Make a clone of this object, possibly modifying the cloned object
   * to make it sane.
   * @return a pointer to the new object.
   */
  virtual IBPtr fullclone() const;
  //@}
  
protected:

  /**
   * Initialize this object after the setup phase before saving and
   * EventGenerator to disk.
   * @throws InitException if object could not be initialized properly.
   */
  virtual void doinit();

  /**
   * Initialize this object. Called in the run phase just before
   * a run begins.
   */
  virtual void doinitrun();
  //@}

private:
  
  /** 
   * Private and non-existent assignment operator.
   */
  FRModel & operator=(const FRModel &) = delete;

private:

  /**
   *  Helper functions for doinit
   */
  //@{


  //@}
  
private:

  /**
   * Pointers to the vertices for FRModel Model helicity amplitude
   * calculations.
   */
  //@{


  double ZERO_;
  double MU_R_;
  double l2_;
  double l3_;
  double lR7_;
  double aEWM1_;
  double Gf_;
  double aS_;
  double ymb_;
  double ymt_;
  double ymtau_;
  double tanbeta_;
  double sinbma_;
  double MZ_;
  double MT_;
  double MB_;
  double mhc_;
  double mh1_;
  double mh2_;
  double mh3_;
  double WZ_;
  double WW_;
  double WT_;
  double whc_;
  double Wh1_;
  double Wh2_;
  double Wh3_;
  double TH1x1_;
  double TH1x2_;
  double TH2x1_;
  double TH2x2_;
  double TH3x3_;
  double aEW_;
  double G_;
  Complex l7_;
  double lI5_;
  double lI6_;
  double MW_;
  double ee_;
  double sw2_;
  double cw_;
  double sw_;
  double g1_;
  double gw_;
  double vev_;
  double mu2_;
  double l1_;
  double l4_;
  double lR5_;
  double lR6_;
  double yb_;
  double yt_;
  double ytau_;
  double mu1_;
  Complex l5_;
  Complex l6_;
  Complex mu3_;
  Complex I1a33_;
  Complex I2a33_;
  Complex I3a33_;
  Complex I4a33_;
  Complex I5a33_;
  Complex I6a33_;
  Complex I7a33_;
  Complex I8a33_;
  //@}
};

}

namespace ThePEG {
  ThePEG_DECLARE_POINTERS(Herwig::FRModel,HwFRModelPtr);
}


#endif /* HERWIG_FRModel_H */
