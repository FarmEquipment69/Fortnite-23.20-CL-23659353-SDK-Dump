// Class /Script/FortniteUI.AthenaProfileStatListWidgetBase
// Size: 0x1440
class UAthenaProfileStatListWidgetBase : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UAthenaProfileStatBox* ProfileStatBox; // 0x1438 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaProfileStatListWidgetBase.OnStatChanged (Has no native function)
	void OnStatChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaProfileStatListWidgetBase.HandleStatViewChanged (Underlying native function: HandleStatViewChanged 0xa5ba470)
	void HandleStatViewChanged(class UAthenaBaseStatView*& StatView); // (Final | Native | Private)
};

