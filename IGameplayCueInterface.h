// Class /Script/GameplayAbilities.GameplayCueInterface
// Size: 0x28
class IGameplayCueInterface : public IInterface
{

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent (Underlying native function: ForwardGameplayCueToParent 0x24fe6c4)
	void ForwardGameplayCueToParent(); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler (Has no native function)
	void BlueprintCustomHandler(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)
};

