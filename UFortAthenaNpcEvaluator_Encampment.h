// Class /Script/FortniteAI.FortAthenaNpcEvaluator_Encampment
// Size: 0x4d8
class UFortAthenaNpcEvaluator_Encampment : public UFortAthenaAIBotEvaluator_Movement
{
	struct FScalableFloat EncampmentEnable; // 0x230 (0x28)
	struct FScalableFloat EncampmentTentativeDelayMin; // 0x258 (0x28)
	struct FScalableFloat EncampmentTentativeDelayMax; // 0x280 (0x28)
	struct FScalableFloat EncampmentDurationMin; // 0x2a8 (0x28)
	struct FScalableFloat EncampmentDurationMax; // 0x2d0 (0x28)
	struct FScalableFloat BuilderPercentage; // 0x2f8 (0x28)
	struct FScalableFloat BuilderMinDistance; // 0x320 (0x28)
	struct FScalableFloat BuilderMaxDistance; // 0x348 (0x28)
	struct FScalableFloat GuardMinDistance; // 0x370 (0x28)
	struct FScalableFloat GuardMaxDistance; // 0x398 (0x28)
	struct FScalableFloat AllowInSwimming; // 0x3c0 (0x28)
	struct FScalableFloat AllowInFalling; // 0x3e8 (0x28)
	struct FScalableFloat MinSquadMembersCountToBuild; // 0x410 (0x28)
	struct FName EncampmentStatusKeyName; // 0x438 (0x4)
	unsigned char unreflected_43c[0x4]; // 0x43c (0x4) 
	struct FName EncampmentMovementStateKeyName; // 0x440 (0x4)
	unsigned char unreflected_444[0x4]; // 0x444 (0x4) 
	struct FName EncampmentCenterLocationKeyName; // 0x448 (0x4)
	unsigned char unreflected_44c[0x4]; // 0x44c (0x4) 
	struct FName EncampmentDestinationKeyName; // 0x450 (0x4)
	unsigned char unreflected_454[0x4]; // 0x454 (0x4) 
	struct FName EncampmentAroundCampFireLocationKeyName; // 0x458 (0x4)
	unsigned char unreflected_45c[0x4]; // 0x45c (0x4) 
	struct FName EncampmentRoleKeyName; // 0x460 (0x4)
	unsigned char unreflected_464[0x4]; // 0x464 (0x4) 
	struct FName DefensiveBuildName; // 0x468 (0x4)
	unsigned char padding_46c[0x6c]; // 0x46c (0x6c)
};

