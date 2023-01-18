// Class /Script/FortniteGame.FortAthenaTutorialManager
// Size: 0x450
class AFortAthenaTutorialManager : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	bool bPlayTutorials; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct TArray<class AFortAthenaTutorialBase*> TutorialsToExecute; // 0x298 (0x10)
	struct TArray<class AFortAthenaTutorialBase*> TutorialsToExecuteDefensiveBuildingFlow; // 0x2a8 (0x10)
	class AFortAthenaTutorialBase* InitialTutorial; // 0x2b8 (0x8)
	struct FGameplayTag TutorialHUDTag; // 0x2c0 (0x4)
	struct FGameplayTag TopResourceTag; // 0x2c4 (0x4)
	struct FVector2D TopResourceNewPosition; // 0x2c8 (0x10)
	class APlayerStart* AthenaTutorialSpawnPoint; // 0x2d8 (0x8)
	bool ForceEnableDefensiveBuildingFlow; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0xf7]; // 0x2e1 (0xf7) 
	int CurrentTutorialIndex; // 0x3d8 (0x4)
	unsigned char unreflected_3dc[0x4]; // 0x3dc (0x4) 
	float GuidedTutorialTimeStart; // 0x3e0 (0x4)
	float CurrentTutorialStepTimeStart; // 0x3e4 (0x4)
	struct FGameplayTagContainer InitialHUDTagsToDisable; // 0x3e8 (0x20)
	unsigned char unreflected_408[0x28]; // 0x408 (0x28) 
	class UUserWidget* TutorialHUD; // 0x430 (0x8)
	struct TArray<class AFortAthenaTutorialBase*> CurrentTutorialList; // 0x438 (0x10)
	struct FGameplayTag TagDisableClambering; // 0x448 (0x4)
	unsigned char padding_44c[0x4]; // 0x44c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorialManager.Server_OnTutorialScreenCompleted (Underlying native function: Server_OnTutorialScreenCompleted 0x23eff98)
	void ServerOnTutorialScreenCompleted(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaTutorialManager.Server_OnClientReadyToStartMatch (Underlying native function: Server_OnClientReadyToStartMatch 0x22c0e58)
	void ServerOnClientReadyToStartMatch(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)
};

