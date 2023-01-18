// Class /Script/FortniteAI.FortAthenaAIEvaluator_NearbyActorsPerception
// Size: 0x210
class UFortAthenaAIEvaluator_NearbyActorsPerception : public UFortAthenaAIEvaluator
{
	struct FName FoundNearbyActorKeyName; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FScalableFloat MinimumUpdateInterval; // 0x60 (0x28)
	int RequiredTypes; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	struct FScalableFloat MinimumDistanceToActors; // 0x90 (0x28)
	struct TArray<struct TEnumAsByte<ETeamAttitude>> RequiredAttitudes; // 0xb8 (0x10)
	bool bRequireLoS; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x7]; // 0xc9 (0x7) 
	struct FGameplayTagQuery RequiredTagsQuery; // 0xd0 (0x48)
	unsigned char padding_118[0xf8]; // 0x118 (0xf8)
};

