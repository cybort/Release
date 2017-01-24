/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES

#include "GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace vl_workflow_global
{
	class __vwsnc10_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_presentation_templates_GuiTemplate_IFactory;
	class __vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	class __vwsnc3_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc4_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	class __vwsnc5_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc6_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	class __vwsnc7_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc8_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	class __vwsnc9_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_presentation_templates_GuiTemplate_IFactory;
	struct __vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__;
	struct __vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__;
	struct __vwsnf3_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__;
	struct __vwsnf4_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__;
}

namespace demo
{
	class ColorBomboItemTemplateConstructor;
	class ColorBomboItemTemplate;
	class ColorListItemTemplateConstructor;
	class ColorListItemTemplate;
	class MainWindowConstructor;
	class MainWindow;
	class IColorItem;
	class IViewModel;

	class ColorBomboItemTemplateConstructor : public ::vl::Object, public ::vl::reflection::Description<ColorBomboItemTemplateConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc3_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<ColorBomboItemTemplateConstructor>;
#endif
	protected:
		::vl::Ptr<::demo::IColorItem> ViewModel = ::vl::Ptr<::demo::IColorItem>();
		::demo::ColorBomboItemTemplate* self = static_cast<::demo::ColorBomboItemTemplate*>(nullptr);
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_0 = static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_1 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::elements::GuiSolidBackgroundElement> __vwsn_precompile_2 = ::vl::Ptr<::vl::presentation::elements::GuiSolidBackgroundElement>();
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_3 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement> __vwsn_precompile_4 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>();
		void __vwsn_initialize_instance_(::demo::ColorBomboItemTemplate* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_);
	public:
		ColorBomboItemTemplateConstructor();
	};

	class ColorBomboItemTemplate : public ::vl::presentation::templates::GuiControlTemplate, public ::demo::ColorBomboItemTemplateConstructor, public ::vl::reflection::Description<ColorBomboItemTemplate>
	{
		friend class ::demo::ColorBomboItemTemplateConstructor;
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc3_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_ColorBomboItemTemplateConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<ColorBomboItemTemplate>;
#endif
	protected:
		::vl::presentation::Color textColor = ::vl::__vwsn::Parse<::vl::presentation::Color>(::vl::WString(L"#000000", false));
	public:
		::vl::Event<void()> TextColorChanged;
		::vl::presentation::Color GetTextColor();
		void SetTextColor(::vl::presentation::Color value);
		::vl::Ptr<::demo::IColorItem> __vwsn_parameter_ViewModel = ::vl::Ptr<::demo::IColorItem>();
		::vl::Ptr<::demo::IColorItem> GetViewModel();
		ColorBomboItemTemplate(::vl::Ptr<::demo::IColorItem> __vwsn_ctor_parameter_ViewModel);
		~ColorBomboItemTemplate();
	};

	class ColorListItemTemplateConstructor : public ::vl::Object, public ::vl::reflection::Description<ColorListItemTemplateConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc5_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc6_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc7_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc8_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend struct ::vl_workflow_global::__vwsnf3_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<ColorListItemTemplateConstructor>;
#endif
	protected:
		::vl::Ptr<::demo::IColorItem> ViewModel = ::vl::Ptr<::demo::IColorItem>();
		::demo::ColorListItemTemplate* self = static_cast<::demo::ColorListItemTemplate*>(nullptr);
		::demo::ColorBomboItemTemplate* __vwsn_precompile_0 = static_cast<::demo::ColorBomboItemTemplate*>(nullptr);
		void __vwsn_initialize_instance_(::demo::ColorListItemTemplate* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_);
	public:
		ColorListItemTemplateConstructor();
	};

	class ColorListItemTemplate : public ::vl::presentation::templates::GuiTextListItemTemplate, public ::demo::ColorListItemTemplateConstructor, public ::vl::reflection::Description<ColorListItemTemplate>
	{
		friend class ::demo::ColorListItemTemplateConstructor;
		friend class ::vl_workflow_global::__vwsnc5_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc6_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc7_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc8_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend struct ::vl_workflow_global::__vwsnf3_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_ColorListItemTemplateConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<ColorListItemTemplate>;
#endif
	public:
		::vl::Ptr<::demo::IColorItem> __vwsn_parameter_ViewModel = ::vl::Ptr<::demo::IColorItem>();
		::vl::Ptr<::demo::IColorItem> GetViewModel();
		ColorListItemTemplate(::vl::Ptr<::demo::IColorItem> __vwsn_ctor_parameter_ViewModel);
		~ColorListItemTemplate();
	};

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc10_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_presentation_templates_GuiTemplate_IFactory;
		friend class ::vl_workflow_global::__vwsnc9_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_presentation_templates_GuiTemplate_IFactory;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::vl::Ptr<::demo::IViewModel> ViewModel = ::vl::Ptr<::demo::IViewModel>();
		::demo::MainWindow* __vwsn_precompile_0 = static_cast<::demo::MainWindow*>(nullptr);
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_1 = static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_2 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiLabel* __vwsn_precompile_3 = static_cast<::vl::presentation::controls::GuiLabel*>(nullptr);
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_4 = static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr);
		::vl::presentation::controls::GuiComboBoxListControl* __vwsn_precompile_5 = static_cast<::vl::presentation::controls::GuiComboBoxListControl*>(nullptr);
		::vl::presentation::controls::GuiBindableTextList* __vwsn_precompile_6 = static_cast<::vl::presentation::controls::GuiBindableTextList*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_7 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_8 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		void __vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_);
	public:
		MainWindowConstructor();
	};

	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::demo::MainWindowConstructor;
		friend class ::vl_workflow_global::__vwsnc10_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_presentation_templates_GuiTemplate_IFactory;
		friend class ::vl_workflow_global::__vwsnc9_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_presentation_templates_GuiTemplate_IFactory;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	public:
		::vl::Ptr<::demo::IViewModel> __vwsn_parameter_ViewModel = ::vl::Ptr<::demo::IViewModel>();
		::vl::Ptr<::demo::IViewModel> GetViewModel();
		MainWindow(::vl::Ptr<::demo::IViewModel> __vwsn_ctor_parameter_ViewModel);
		~MainWindow();
	};

	class IColorItem : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IColorItem>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IColorItem>;
#endif
	public:
		virtual ::vl::WString GetItemName() = 0;
		virtual ::vl::presentation::Color GetItemColor() = 0;
	};

	class IViewModel : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IViewModel>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IViewModel>;
#endif
	public:
		virtual ::vl::collections::LazyList<::vl::Ptr<::demo::IColorItem>> GetColorItems() = 0;
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class Demo
	{
	public:

		static Demo& Instance();
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
