// Class /Script/LatencyUI.LatencyWidget
// Size: 0x360
class ULatencyWidget : public UUserWidget
{
	unsigned char unreflected_268[0x8]; // 0x268 (0x8) 
	class UCommonTextBlock* TotalLatencyUI; // 0x270 (0x8)
	class UCommonTextBlock* GameLatencyUI; // 0x278 (0x8)
	class UCommonTextBlock* RenderLatencyUI; // 0x280 (0x8)
	class UCommonTextBlock* OSWorkLatencyUI; // 0x288 (0x8)
	class UCommonTextBlock* DriverLatencyUI; // 0x290 (0x8)
	class UCommonTextBlock* GPURenderLatencyUI; // 0x298 (0x8)
	class UCommonTextBlock* TweakLatencyUI; // 0x2a0 (0x8)
	unsigned char padding_2a8[0xb8]; // 0x2a8 (0xb8)

	/* Functions */

	// Function /Script/LatencyUI.LatencyWidget.StopTimer (Underlying native function: StopTimer 0x7f94d60)
	void StopTimer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/LatencyUI.LatencyWidget.StartTimer (Underlying native function: StartTimer 0x7f94d48)
	void StartTimer(); // (Final | Native | Protected | BlueprintCallable)
};

