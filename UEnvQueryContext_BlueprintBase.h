// Class /Script/AIModule.EnvQueryContext_BlueprintBase
// Size: 0x30
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
	unsigned char unreflected_30[0x30]; 

	/* Functions */

	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation (Has no native function)
	void ProvideSingleLocation(class UObject*& QuerierObject, class AActor*& QuerierActor, struct FVector& ResultingLocation); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor (Has no native function)
	void ProvideSingleActor(class UObject*& QuerierObject, class AActor*& QuerierActor, class AActor*& ResultingActor); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet (Has no native function)
	void ProvideLocationsSet(class UObject*& QuerierObject, class AActor*& QuerierActor, struct TArray<struct FVector>& ResultingLocationSet); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet (Has no native function)
	void ProvideActorsSet(class UObject*& QuerierObject, class AActor*& QuerierActor, struct TArray<class AActor*>& ResultingActorsSet); // (Event | Public | HasOutParms | BlueprintEvent | Const)
};

