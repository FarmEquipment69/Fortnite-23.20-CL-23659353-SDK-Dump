// Class /Script/FortniteAI.FortAthenaAIBotPathFollowingComponent
// Size: 0x558
class UFortAthenaAIBotPathFollowingComponent : public UFortPathFollowingComponentBase
{
	class AFortAthenaAIBotController* BotController; // 0x328 (0x8)
	class ABuildingActor* HitBuilding; // 0x330 (0x8)
	class UFortAthenaAIBotUnstuckDigestedSkillSet* CachedUnstuckSkillSet; // 0x338 (0x8)
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet; // 0x340 (0x8)
	class UFortAthenaAIBotVehicleDigestedSkillSet* CachedVehicleSkillSet; // 0x348 (0x8)
	unsigned char padding_350[0x208]; // 0x350 (0x208)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaAIBotPathFollowingComponent.HandlePawnTeleported (Underlying native function: HandlePawnTeleported 0xa38cc34)
	void HandlePawnTeleported(class AFortPawn*& TeleportedPawn); // (Final | Native | Public)
};

