// Class /Script/GameplayEventRouter.GameplayEventRouterSubsytem
// Size: 0xe0
class UGameplayEventRouterSubsytem : public UGameInstanceSubsystem
{
	unsigned char unreflected_e0[0xe0]; 

	/* Functions */

	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsytem.GetGlobalEventRouter (Underlying native function: GetGlobalEventRouter 0x70462bc)
	static class UGameplayEventRouterComponent* GetGlobalEventRouter(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayEventRouter.GameplayEventRouterSubsytem.GetEventRouter (Underlying native function: GetEventRouter 0x70461f8)
	static class UGameplayEventRouterComponent* GetEventRouter(class UClass*& Scope, class AActor*& ContextActor); // (Final | Native | Static | Public | BlueprintCallable)
};

