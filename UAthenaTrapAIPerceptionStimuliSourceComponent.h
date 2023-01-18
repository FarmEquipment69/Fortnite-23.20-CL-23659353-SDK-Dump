// Class /Script/FortniteAI.AthenaTrapAIPerceptionStimuliSourceComponent
// Size: 0x110
class UAthenaTrapAIPerceptionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent
{
	struct TMap<class AActor*, struct FTrapDetectionState*> TrapDiscoverabilityMap; // 0xb8 (0x50)
	unsigned char bEnablePerceptionSystemOnTrap; // 0x108 (0x1)
	unsigned char padding_109[0x7]; // 0x109 (0x7)
};

