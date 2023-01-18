// Class /Script/FortniteGame.FortMovementComp_AIChar
// Size: 0x4dc0
class UFortMovementComp_AIChar : public UFortMovementComp_Character
{
	unsigned char bDeimos; // 0x4d70 (0x1)
	unsigned char unreflected_4d71[0x7]; // 0x4d71 (0x7) 
	struct FVector CustomRVOAvoidanceOriginOffset; // 0x4d78 (0x18)
	float CustomRVOAvoidanceRadius; // 0x4d90 (0x4)
	unsigned char bForceUseOfOwnerRenderingTime; // 0x4d94 (0x1)
	unsigned char unreflected_4d95[0x1b]; // 0x4d95 (0x1b) 
	class UAthenaPathFollowingComponent* CachedAthenaPathFollowingComp; // 0x4db0 (0x8)
	class AAthenaAIController* CachedAthenaAIController; // 0x4db8 (0x8)
};

