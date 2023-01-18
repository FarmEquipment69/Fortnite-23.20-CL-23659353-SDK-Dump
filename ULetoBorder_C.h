// WidgetBlueprintGeneratedClass /Game/UI/Foundation/LetoBorder.LetoBorder_C
// Size: 0x2d0
class ULetoBorder_C : public UFortLetoLayoutBorder
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x298 (0x8)
	class UBorder* BorderBottom; // 0x2a0 (0x8)
	class UBorder* BorderLeft; // 0x2a8 (0x8)
	class UBorder* BorderNameplate; // 0x2b0 (0x8)
	class UBorder* BorderRight; // 0x2b8 (0x8)
	class UBorder* BorderTop; // 0x2c0 (0x8)
	class USafeZone* SafeZone0; // 0x2c8 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/LetoBorder.LetoBorder_C.UpdateBorderWidth (Has no native function)
	void UpdateBorderWidth(float& HalfBorderWidth); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/LetoBorder.LetoBorder_C.ExecuteUbergraph_LetoBorder (Has no native function)
	void ExecuteUbergraphLetoBorder(int& EntryPoint, float& K2NodeEventHalfBorderWidth, struct FMargin& K2NodeMakeStructMargin); // (Final | 0x00008000)
};

