// Class /Script/PropManipulation.PropManipulationNativeComponent
// Size: 0xa0
class UPropManipulationNativeComponent : public UActorComponent
{

	/* Functions */

	// Function /Script/PropManipulation.PropManipulationNativeComponent.ShouldApplyHealthBoostToIslandInvulnerableProps (Underlying native function: ShouldApplyHealthBoostToIslandInvulnerableProps 0x55a0c40)
	static bool ShouldApplyHealthBoostToIslandInvulnerableProps(); // (Final | Native | Static | Protected | BlueprintCallable)

	// Function /Script/PropManipulation.PropManipulationNativeComponent.SetControlledObjectsVisibilityAndCollision (Underlying native function: SetControlledObjectsVisibilityAndCollision 0x73b0b38)
	void SetControlledObjectsVisibilityAndCollision(struct TArray<class ABuildingSMActor*>& InObjectsOfControl, bool& InNewVisibility); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/PropManipulation.PropManipulationNativeComponent.RefreshTrackedActors (Underlying native function: RefreshTrackedActors 0x73b0acc)
	void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker*& InPlaySpaceComponentSpatialActorTracker); // (Final | Native | Protected | BlueprintCallable)
};

