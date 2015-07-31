//
// Generated file, do not edit! Created by nedtool 4.6 from attacks/controlmessages/delayAttack/NA_DelayMessage.msg.
//

#ifndef _NA_DELAYMESSAGE_M_H_
#define _NA_DELAYMESSAGE_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "omnetpp.h"
typedef cPar *ParPtr;
// }}

/**
 * Class generated from <tt>attacks/controlmessages/delayAttack/NA_DelayMessage.msg:36</tt> by nedtool.
 * <pre>
 * //
 * // Message interchanged between delay attack controller and the corresponding hacked
 * // modules. In this case NA_IPv4
 * //
 * // @see NA_DelayAttack, NA_IPv4
 * //
 * // @author Gabriel Maciá Fernández, gmacia@ugr.es
 * // @date 01/22/2013
 * message NA_DelayMessage
 * {
 *     double delayAttackProbability; // Attack probability
 *     ParPtr delayAttackValue;  // Implemented as a pointer to cPar to allow the use of random distributions for the delay value
 * 
 * }
 * </pre>
 */
class NA_DelayMessage : public ::cMessage
{
  protected:
    double delayAttackProbability_var;
    ParPtr delayAttackValue_var;

  private:
    void copy(const NA_DelayMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NA_DelayMessage&);

  public:
    NA_DelayMessage(const char *name=NULL, int kind=0);
    NA_DelayMessage(const NA_DelayMessage& other);
    virtual ~NA_DelayMessage();
    NA_DelayMessage& operator=(const NA_DelayMessage& other);
    virtual NA_DelayMessage *dup() const {return new NA_DelayMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual double getDelayAttackProbability() const;
    virtual void setDelayAttackProbability(double delayAttackProbability);
    virtual ParPtr& getDelayAttackValue();
    virtual const ParPtr& getDelayAttackValue() const {return const_cast<NA_DelayMessage*>(this)->getDelayAttackValue();}
    virtual void setDelayAttackValue(const ParPtr& delayAttackValue);
};

inline void doPacking(cCommBuffer *b, NA_DelayMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NA_DelayMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef _NA_DELAYMESSAGE_M_H_

