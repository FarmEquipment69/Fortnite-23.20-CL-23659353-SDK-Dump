// Class /Script/Engine.LightWeightInstanceBlueprintFunctionLibrary
// Size: 0x28
class ULightWeightInstanceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.LightWeightInstanceBlueprintFunctionLibrary.CreateNewLightWeightInstance (Underlying native function: CreateNewLightWeightInstance 0x9e3eb8c)
	static struct FActorInstanceHandle CreateNewLightWeightInstance(class UClass*& ActorClass, struct FTransform& Transform, class UDataLayerInstance*& Layer, class UWorld*& World); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.LightWeightInstanceBlueprintFunctionLibrary.ConvertActorToLightWeightInstance (Underlying native function: ConvertActorToLightWeightInstance 0x9e3e924)
	static struct FActorInstanceHandle ConvertActorToLightWeightInstance(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable)
};

