// Class /Script/FortniteGame.FortAthenaRewardEventGraphPurchaseToken
// Size: 0x478
class UFortAthenaRewardEventGraphPurchaseToken : public UFortAccountItemDefinition
{
	enum EItemProfileType ProfileType; // 0x420 (0x1)
	unsigned char unreflected_421[0x7]; // 0x421 (0x7) 
	struct TWeakObjectPtr<class UAthenaRewardEventGraph> RewardEventGraphDefinition; // 0x428 (0x28)
	struct TWeakObjectPtr<class UFortRepeatableDailiesCardItemDefinition> RepeatableDailiesCardItemDefinition; // 0x450 (0x28)
};

