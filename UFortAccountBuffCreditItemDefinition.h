// Class /Script/FortniteGame.FortAccountBuffCreditItemDefinition
// Size: 0x458
class UFortAccountBuffCreditItemDefinition : public UFortConsumableAccountItemDefinition
{
	struct TWeakObjectPtr<class UFortAccountBuffItemDefinition> BuffToGrant; // 0x428 (0x28)
	int MinutesOfBuffTimeToGrant; // 0x450 (0x4)
	unsigned char padding_454[0x4]; // 0x454 (0x4)
};

