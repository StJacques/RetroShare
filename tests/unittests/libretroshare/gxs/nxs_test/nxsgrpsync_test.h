/*
 * nxsgrpsync_test.h
 *
 *  Created on: 13 Apr 2014
 *      Author: crispy
 */

#ifndef NXSGRPSYNC_TEST_H_
#define NXSGRPSYNC_TEST_H_


#include "nxstestscenario.h"

class NxsGrpSync : public NxsTestScenario
{
public:

	NxsGrpSync();

	void getPeers(std::list<RsPeerId>& peerIds);
	RsGeneralDataService* getDataService(const RsPeerId& peerId);
	bool checkTestPassed();
	RsNxsNetMgr* getDummyNetManager(const RsPeerId& peerId);
	RsGcxs* getDummyCircles(const RsPeerId& peerId);
	RsGixsReputation* getDummyReputations(const RsPeerId& peerId);
	uint16_t getServiceType();

private:

	std::list<RsPeerId> mPeerIds;
	std::map<RsPeerId, RsGeneralDataService*> mDataServices;
	std::map<RsPeerId, RsNxsNetMgr*> mNxsNetMgrs;
	RsGixsReputation* mRep;
	RsGcxs* mCircles;

	int mServType;
};


#endif /* NXSGRPSYNC_TEST_H_ */