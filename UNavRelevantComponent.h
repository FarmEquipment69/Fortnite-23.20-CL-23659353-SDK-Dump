// Class /Script/NavigationSystem.NavRelevantComponent
// Size: 0xf0
class UNavRelevantComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x40]; // 0xa0 (0x40) 
	unsigned char bAttachToOwnersRoot; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	class UObject* CachedNavParent; // 0xe8 (0x8)

	/* Functions */

	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy (Underlying native function: SetNavigationRelevancy 0xa0b8d78)
	void SetNavigationRelevancy(bool& bRelevant); // (Final | Native | Public | BlueprintCallable)
};

