// Class /Script/FortniteGame.MinigameBlueprintLibrary
// Size: 0x28
class UMinigameBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.MinigameBlueprintLibrary.IsMingameExperienceReady (Underlying native function: IsMingameExperienceReady 0x8b0b7f4)
	static bool IsMingameExperienceReady(class AActor*& ContextActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MinigameBlueprintLibrary.GetMinigameVolumeComponent (Underlying native function: GetMinigameVolumeComponent 0x8b090a4)
	static class UFortMinigameVolumeComponent* GetMinigameVolumeComponent(class AActor*& ContextActor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.MinigameBlueprintLibrary.GetMinigameStatsComponent (Underlying native function: GetMinigameStatsComponent 0x8b09024)
	static class UFortMinigameStatsComponent* GetMinigameStatsComponent(class AActor*& ContextActor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.MinigameBlueprintLibrary.GetMinigameSettingsMachine_NotPure (Underlying native function: GetMinigameSettingsMachine_NotPure 0x8b08fa4)
	static class AFortMinigameSettingsBuilding* GetMinigameSettingsMachineNotPure(class AActor*& ContextActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MinigameBlueprintLibrary.GetMinigameSettingsMachine (Underlying native function: GetMinigameSettingsMachine 0x8b08fa4)
	static class AFortMinigameSettingsBuilding* GetMinigameSettingsMachine(class AActor*& ContextActor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.MinigameBlueprintLibrary.GetMinigameForActor (Underlying native function: GetMinigameForActor 0x8b08f24)
	static class AFortMinigame* GetMinigameForActor(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MinigameBlueprintLibrary.GetMinigame (Underlying native function: GetMinigame 0x8b08f24)
	static class AFortMinigame* GetMinigame(class AActor*& ContextActor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.MinigameBlueprintLibrary.GetComponentFromCurrentMinigameExperience (Underlying native function: GetComponentFromCurrentMinigameExperience 0x8b08908)
	static class UActorComponent* GetComponentFromCurrentMinigameExperience(class AActor*& ContextActor, class UClass*& ComponentClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MinigameBlueprintLibrary.CanOperateOnMinigame (Underlying native function: CanOperateOnMinigame 0x8b076f4)
	static bool CanOperateOnMinigame(class AFortPlayerController*& PlayerController); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

