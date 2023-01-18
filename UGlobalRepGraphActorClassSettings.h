// Class /Script/FortniteGame.GlobalRepGraphActorClassSettings
// Size: 0x68
class UGlobalRepGraphActorClassSettings : public UObject
{
	struct TArray<struct FRepGraphActorTemplateSettings> TemplateSettings; // 0x28 (0x10)
	struct TArray<struct FRepGraphActorClassSettings> ClassSettings; // 0x38 (0x10)
	struct TArray<struct FRepGraphClassTracking> ExplicitCSVTracking; // 0x48 (0x10)
	struct TArray<struct FRepGraphClassTracking> MinimalExplicitCSVTracking; // 0x58 (0x10)
};

