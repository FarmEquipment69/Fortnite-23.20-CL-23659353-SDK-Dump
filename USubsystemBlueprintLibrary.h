// Class /Script/Engine.SubsystemBlueprintLibrary
// Size: 0x28
class USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.SubsystemBlueprintLibrary.GetWorldSubsystem (Underlying native function: GetWorldSubsystem 0x11861c8)
	static class UWorldSubsystem* GetWorldSubsystem(class UObject*& ContextObject, class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.SubsystemBlueprintLibrary.GetLocalPlayerSubSystemFromPlayerController (Underlying native function: GetLocalPlayerSubSystemFromPlayerController 0x268c46c)
	static class ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(class APlayerController*& PlayerController, class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.SubsystemBlueprintLibrary.GetLocalPlayerSubsystem (Underlying native function: GetLocalPlayerSubsystem 0x2350884)
	static class ULocalPlayerSubsystem* GetLocalPlayerSubsystem(class UObject*& ContextObject, class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.SubsystemBlueprintLibrary.GetGameInstanceSubsystem (Underlying native function: GetGameInstanceSubsystem 0x21c81f8)
	static class UGameInstanceSubsystem* GetGameInstanceSubsystem(class UObject*& ContextObject, class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.SubsystemBlueprintLibrary.GetEngineSubsystem (Underlying native function: GetEngineSubsystem 0x23c1224)
	static class UEngineSubsystem* GetEngineSubsystem(class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.SubsystemBlueprintLibrary.GetAudioEngineSubsystem (Underlying native function: GetAudioEngineSubsystem 0x9f954ac)
	static class UAudioEngineSubsystem* GetAudioEngineSubsystem(class UObject*& ContextObject, class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

