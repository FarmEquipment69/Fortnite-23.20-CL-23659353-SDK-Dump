// Class /Script/NavigationSystem.NavModifierComponent
// Size: 0x190
class UNavModifierComponent : public UNavRelevantComponent
{
	class UClass* AreaClass; // 0xf0 (0x8)
	struct FVector FailsafeExtent; // 0xf8 (0x18)
	unsigned char bIncludeAgentHeight; // 0x110 (0x1)
	unsigned char padding_111[0x7f]; // 0x111 (0x7f)

	/* Functions */

	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass (Underlying native function: SetAreaClass 0xa0b8cf8)
	void SetAreaClass(class UClass*& NewAreaClass); // (Final | Native | Public | BlueprintCallable)
};

