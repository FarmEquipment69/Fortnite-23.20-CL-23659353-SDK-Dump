// Class /Script/FortniteGame.FortAthenaTutorialBase
// Size: 0x2f0
class AFortAthenaTutorialBase : public AActor
{
	struct FGameplayTagContainer DefaultHUDElementTags; // 0x288 (0x20)
	class AActor* CameraStartPositionActor; // 0x2a8 (0x8)
	bool bExecuting; // 0x2b0 (0x1)
	unsigned char unreflected_2b1[0x3]; // 0x2b1 (0x3) 
	int CurrentStepIndex; // 0x2b4 (0x4)
	class AActor* CurrentTrackedActor; // 0x2b8 (0x8)
	unsigned char padding_2c0[0x30]; // 0x2c0 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaTutorialBase.SetEasyInteractIconActor (Underlying native function: SetEasyInteractIconActor 0x720c64c)
	void SetEasyInteractIconActor(class AActor*& TrackedActor); // (BlueprintAuthorityOnly | Net | NetReliable | Native | Event | NetMulticast | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaTutorialBase.OnStopTutorial_Client (Underlying native function: OnStopTutorial_Client 0x22c0e58)
	void OnStopTutorialClient(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortAthenaTutorialBase.OnStartTutorial_Client (Underlying native function: OnStartTutorial_Client 0x2646488)
	void OnStartTutorialClient(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortAthenaTutorialBase.OnRep_TrackedActor (Underlying native function: OnRep_TrackedActor 0x856e824)
	void OnRepTrackedActor(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaTutorialBase.OnClientStepCompleted_Server (Underlying native function: OnClientStepCompleted_Server 0x856e460)
	void OnClientStepCompletedServer(int& StepIndex); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortAthenaTutorialBase.IsExecuting (Underlying native function: IsExecuting 0x856dd3c)
	bool IsExecuting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaTutorialBase.ExecuteTutorialStep_Client (Underlying native function: ExecuteTutorialStep_Client 0x856ce34)
	void ExecuteTutorialStepClient(int& StepIndex); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

