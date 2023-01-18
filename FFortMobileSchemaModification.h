// ScriptStruct /Script/FortniteGame.FortMobileSchemaModification
// Size: 0x80
struct FFortMobileSchemaModification
{
	struct FGuid Guid; // 0x0 (0x10)
	enum ESchemaModificationType ModificationType; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FGameplayTag OwningContextTag; // 0x14 (0x4)
	struct FFortMobileHUDWidgetSchemaSave ModifiedSchema; // 0x18 (0x68)
};

