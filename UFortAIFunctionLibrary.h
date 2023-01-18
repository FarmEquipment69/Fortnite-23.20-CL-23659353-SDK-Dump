// Class /Script/FortniteAI.FortAIFunctionLibrary
// Size: 0x28
class UFortAIFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteAI.FortAIFunctionLibrary.TeleportAIPawn (Underlying native function: TeleportAIPawn 0xa2a2e74)
	static bool TeleportAIPawn(class AFortAIPawn*& AIPawn, struct FVector& DestLocation, struct FRotator& DestRotation, bool& bIgnoreCollision); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.SetHearingRange (Underlying native function: SetHearingRange 0x8adee2c)
	static void SetHearingRange(class AActor*& AIAgent, float& Range); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.RequestNavUpdateForBuilding (Underlying native function: RequestNavUpdateForBuilding 0xa2a1e70)
	static void RequestNavUpdateForBuilding(class ABuildingActor*& BuildingActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.MakeNoiseEventAtLocation (Underlying native function: MakeNoiseEventAtLocation 0xa29f8c8)
	static void MakeNoiseEventAtLocation(class AActor*& NoiseMaker, float& MaxRange, struct FVector& NoiseLocation, struct FName& NoiseTag); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.MakeNoiseEvent (Underlying native function: MakeNoiseEvent 0xa29f640)
	static void MakeNoiseEvent(class AActor*& NoiseMaker, float& MaxRange, struct FName& NoiseTag); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.IsConcealedByPerceptionModifiers (Underlying native function: IsConcealedByPerceptionModifiers 0xa29e884)
	static bool IsConcealedByPerceptionModifiers(class UObject*& WorldContextObject, struct FVector& ObserverLocation, struct FVector& TargetLocation, float& OutConcealment); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.GetOrCreateAIRuntimeParameters (Underlying native function: GetOrCreateAIRuntimeParameters 0xa29e700)
	static class UFortAthenaAIRuntimeParameters* GetOrCreateAIRuntimeParameters(class AAIController*& AIController, class UClass*& ParametersClass); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAIFunctionLibrary.GetAISpawner (Underlying native function: GetAISpawner 0xa29e514)
	static class UAthenaAISpawner* GetAISpawner(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)
};

