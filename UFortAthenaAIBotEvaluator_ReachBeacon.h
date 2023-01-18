// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_ReachBeacon
// Size: 0x250
class UFortAthenaAIBotEvaluator_ReachBeacon : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName ReachBeaconStatusKeyName; // 0x230 (0x4)
	struct FName ReachBeaconMovementStateKeyName; // 0x234 (0x4)
	struct FName ReachBeaconTargetKeyName; // 0x238 (0x4)
	unsigned char unreflected_23c[0x8]; // 0x23c (0x8) 
	struct TWeakObjectPtr<class UFortAthenaBeaconComponent> CurrentBeacon; // 0x244 (0x8)
	unsigned char padding_24c[0x4]; // 0x24c (0x4)
};

