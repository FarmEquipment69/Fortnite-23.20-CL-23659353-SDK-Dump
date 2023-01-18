// Class /Script/Rejoin.RejoinCheck
// Size: 0x188
class URejoinCheck : public UObject
{
	enum ERejoinStatus LastKnownStatus; // 0x28 (0x1)
	bool bRejoinAfterCheck; // 0x29 (0x1)
	bool bAttemptingRejoin; // 0x2a (0x1)
	unsigned char padding_2b[0x15d]; // 0x2b (0x15d)
};

