// Class /Script/FortniteUI.FortProgressModal
// Size: 0x620
class UFortProgressModal : public UFortActivatablePanel
{
	struct FText Title; // 0x518 (0x18)
	struct FText Description; // 0x530 (0x18)
	unsigned char unreflected_548[0x8]; // 0x548 (0x8) 
	struct FSlateBrush Icon; // 0x550 (0xc0)
	bool bIntroOutroEnabled; // 0x610 (0x1)
	bool bAutoInitialize; // 0x611 (0x1)
	bool bFocusSelf; // 0x612 (0x1)
	bool bConsumeAnalogInput; // 0x613 (0x1)
	unsigned char unreflected_614[0x4]; // 0x614 (0x4) 
	class UFortProgressWidget* ProgressWidgetMain; // 0x618 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortProgressModal.SetTitle (Underlying native function: SetTitle 0xa873e68)
	void SetTitle(struct FText& InTitle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortProgressModal.SetIcon (Underlying native function: SetIcon 0xa873b10)
	void SetIcon(struct FSlateBrush& InIcon); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortProgressModal.SetDescription (Underlying native function: SetDescription 0xa873a2c)
	void SetDescription(struct FText& InDescription); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortProgressModal.InitializeModal (Underlying native function: InitializeModal 0xa873330)
	void InitializeModal(); // (Final | Native | Protected | BlueprintCallable)
};

