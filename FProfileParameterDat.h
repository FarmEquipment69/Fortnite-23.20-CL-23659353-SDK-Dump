// ScriptStruct /Script/CustomizableObject.ProfileParameterDat
// Size: 0x70
struct FProfileParameterDat
{
	struct FString ProfileName; // 0x0 (0x10)
	struct TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; // 0x10 (0x10)
	struct TArray<struct FCustomizableObjectIntParameterValue> IntParameters; // 0x20 (0x10)
	struct TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; // 0x30 (0x10)
	struct TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; // 0x40 (0x10)
	struct TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; // 0x50 (0x10)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x60 (0x10)
};

