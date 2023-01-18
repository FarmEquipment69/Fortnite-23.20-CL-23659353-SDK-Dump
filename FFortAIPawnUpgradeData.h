// ScriptStruct /Script/FortniteAI.FortAIPawnUpgradeData
// Size: 0x48
struct FFortAIPawnUpgradeData
{
	struct FCurveTableRowHandle SpawnPointsMultiplierCurve; // 0x0 (0x10)
	struct FCurveTableRowHandle LifespanMultiplierCurve; // 0x10 (0x10)
	struct FCurveTableRowHandle ScoreMultiplierCurve; // 0x20 (0x10)
	class UFortGameplayModifierItemDefinition* ModifierDefinition; // 0x30 (0x8)
	struct TArray<class UFortGameplayModifierItemDefinition*> AdditionalModifiers; // 0x38 (0x10)
};

