// Class /Script/FortniteUI.AthenaDiscoverabilityBase
// Size: 0x328
class UAthenaDiscoverabilityBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x48]; // 0x2d0 (0x48) 
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x318 (0x2)
	unsigned char unreflected_31a[0x6]; // 0x31a (0x6) 
	class UFortControllerComponent_MapDiscoverability* AssociatedComponent; // 0x320 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaDiscoverabilityBase.OnStompFailed (Has no native function)
	void OnStompFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaDiscoverabilityBase.OnStompedByOtherWidget (Has no native function)
	void OnStompedByOtherWidget(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaDiscoverabilityBase.K2_OnBecomeInactive (Has no native function)
	void K2OnBecomeInactive(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaDiscoverabilityBase.K2_OnBecomeActive (Has no native function)
	void K2OnBecomeActive(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaDiscoverabilityBase.CommonVisitedEvent (Underlying native function: CommonVisitedEvent 0xa48b698)
	void CommonVisitedEvent(struct FGameplayTag& NewTag); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.AthenaDiscoverabilityBase.CommonDiscoveredEvent (Underlying native function: CommonDiscoveredEvent 0xa48b608)
	void CommonDiscoveredEvent(struct FGameplayTag& NewTag); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.AthenaDiscoverabilityBase.CommonArrivalEvent (Underlying native function: CommonArrivalEvent 0xa48b578)
	void CommonArrivalEvent(struct FGameplayTag& NewTag); // (Native | Protected | HasOutParms)
};

