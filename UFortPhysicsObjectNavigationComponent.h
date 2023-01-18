// Class /Script/FortniteAI.FortPhysicsObjectNavigationComponent
// Size: 0x240
class UFortPhysicsObjectNavigationComponent : public UFortNavModifierComponent
{
	class UFortPhysicsObjectComponent* PhysicsObjectComponent; // 0x230 (0x8)
	unsigned char padding_238[0x8]; // 0x238 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortPhysicsObjectNavigationComponent.OnSleepStateChanged (Underlying native function: OnSleepStateChanged 0xa340fc8)
	void OnSleepStateChanged(class UPrimitiveComponent*& SimulatingComponent, bool& bIsAwake); // (Final | 0x00000002 | Native | Protected)
};

