// Class /Script/NetUI.NetDebugWidget
// Size: 0x350
class UNetDebugWidget : public UUserWidget
{
	class UCommonTextBlock* PingUI; // 0x268 (0x8)
	class UCommonTextBlock* PacketInRateUI; // 0x270 (0x8)
	class UCommonTextBlock* PacketOutRateUI; // 0x278 (0x8)
	class UCommonTextBlock* PacketInLossUI; // 0x280 (0x8)
	class UCommonTextBlock* PacketOutLossUI; // 0x288 (0x8)
	class UCommonTextBlock* UpBandwidthUI; // 0x290 (0x8)
	class UCommonTextBlock* DownBandwidthUI; // 0x298 (0x8)
	unsigned char padding_2a0[0xb0]; // 0x2a0 (0xb0)

	/* Functions */

	// Function /Script/NetUI.NetDebugWidget.StopTimer (Underlying native function: StopTimer 0x2b64ccc)
	void StopTimer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/NetUI.NetDebugWidget.StartTimer (Underlying native function: StartTimer 0x7da1174)
	void StartTimer(); // (Final | Native | Protected | BlueprintCallable)
};

