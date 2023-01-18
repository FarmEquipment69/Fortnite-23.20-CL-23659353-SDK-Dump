// Class /Script/FortniteGame.FortEventItemDefinitionBase
// Size: 0x430
class UFortEventItemDefinitionBase : public UFortAccountItemDefinition
{
	int EventPriority; // 0x420 (0x4)
	bool bActivateByDefault; // 0x424 (0x1)
	unsigned char unreflected_425[0x3]; // 0x425 (0x3) 
	struct FName RequiredEventTag; // 0x428 (0x4)
	struct FName DisallowedEventTag; // 0x42c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortEventItemDefinitionBase.CreateCalendarPayload (Underlying native function: CreateCalendarPayload 0x26daa0c)
	void CreateCalendarPayload(); // (Final | Exec | Native | Public)
};

