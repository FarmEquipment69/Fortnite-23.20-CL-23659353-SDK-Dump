// ScriptStruct /Script/FortniteGame.NavWidgetSettings
// Size: 0x30
struct FNavWidgetSettings
{
	bool bDrawNavWidget; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Distance; // 0x4 (0x4)
	float Angle; // 0x8 (0x4)
	float MinRandomNavAngle; // 0xc (0x4)
	float MaxRandomNavAngle; // 0x10 (0x4)
	struct FGameplayTag WordSetToUse; // 0x14 (0x4)
	struct FText IndicatorTextToUse; // 0x18 (0x18)
};

