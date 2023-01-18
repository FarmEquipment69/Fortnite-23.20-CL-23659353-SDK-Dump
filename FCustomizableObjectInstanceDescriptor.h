// ScriptStruct /Script/CustomizableObject.CustomizableObjectInstanceDescriptor
// Size: 0x118
struct FCustomizableObjectInstanceDescriptor
{
	class UCustomizableObject* CustomizableObject; // 0x0 (0x8)
	struct TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters; // 0x8 (0x10)
	struct TArray<struct FCustomizableObjectIntParameterValue> IntParameters; // 0x18 (0x10)
	struct TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters; // 0x28 (0x10)
	struct TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters; // 0x38 (0x10)
	struct TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters; // 0x48 (0x10)
	struct TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x58 (0x10)
	unsigned char unreflected_68[0x60]; // 0x68 (0x60) 
	struct TMap<struct FName, struct FMultilayerProjector> MultilayerProjectors; // 0xc8 (0x50)
};

