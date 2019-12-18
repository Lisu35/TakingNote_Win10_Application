﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class Grid;
                ref class TextBox;
                ref class TextBlock;
                ref class Button;
                ref class SplitView;
                ref class Image;
                ref class StackPanel;
                ref class Border;
                ref class ScrollViewer;
            }
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Shapes {
                ref class Rectangle;
            }
        }
    }
}

namespace OOPLab_Final
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        void UnloadObject(::Windows::UI::Xaml::DependencyObject^ dependencyObject);
        void DisconnectUnloadedObject(int connectionId);
    
    private:
        bool _contentLoaded;
    
    
        private: ::Windows::UI::Xaml::Controls::Grid^ mainScreen;
        private: ::Windows::UI::Xaml::Controls::TextBox^ searchBar;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ tittle;
        private: ::Windows::UI::Xaml::Controls::Button^ searchButton;
        private: ::Windows::UI::Xaml::Controls::Grid^ gridNoteView;
        private: ::Windows::UI::Xaml::Controls::Button^ addNewNoteButton;
        private: ::Windows::UI::Xaml::Controls::SplitView^ opSplitView;
        private: ::Windows::UI::Xaml::Controls::Button^ optionButton;
        private: ::Windows::UI::Xaml::Controls::SplitView^ splitViewDelete;
        private: ::Windows::UI::Xaml::Controls::Button^ rubbishBin;
        private: ::Windows::UI::Xaml::Controls::Button^ SaveButton;
        private: ::Windows::UI::Xaml::Controls::Image^ RubbishBin;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ stackPanelDeleteNote;
        private: ::Windows::UI::Xaml::Shapes::Rectangle^ FillRec_1;
        private: ::Windows::UI::Xaml::Shapes::Rectangle^ FillRec_2;
        private: ::Windows::UI::Xaml::Shapes::Rectangle^ FillRec_3;
        private: ::Windows::UI::Xaml::Controls::TextBox^ textBoxAddTag;
        private: ::Windows::UI::Xaml::Controls::Button^ addTagButton;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ gridAddTag;
        private: ::Windows::UI::Xaml::Shapes::Rectangle^ FillRec_4;
        private: ::Windows::UI::Xaml::Shapes::Rectangle^ FillRec_5;
        private: ::Windows::UI::Xaml::Controls::Border^ borderNoteView;
        private: ::Windows::UI::Xaml::Controls::ScrollViewer^ scrollNoteView;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ stackPanelViewNote;
    };
}

