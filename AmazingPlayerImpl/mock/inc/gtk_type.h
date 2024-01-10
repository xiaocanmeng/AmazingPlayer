#ifndef GTKTYPE_H
#define GTKTYPE_H
// Mocked GTK types
typedef struct _GtkWidget GtkWidget;
typedef struct _GtkButton GtkButton;
typedef struct _GtkContainer GtkContainer;
typedef struct _GdkEvent GdkEvent;
typedef struct _GtkRange GtkRange;  
typedef struct _GtkAdjustment GtkAdjustment;
typedef struct _GtkWindow GtkWindow;
// Mocked GTK types
typedef struct _GtkScale GtkScale;
typedef struct _GtkAdjustment GtkAdjustment;
// Mocked GTK functions
// Mocked GTK types
typedef struct _GtkScale GtkScale;
typedef struct _GtkTextView GtkTextView;
#define GTK_RANGE(var)  (GtkRange*)(var)
#define GTK_SCALE(var)  (GtkScale*)(var)
#define GTK_TEXT_VIEW(var)  (GtkTextView*)(var)
#define GTK_BOX(var)  (GtkBox*)(var)
#define GTK_CONTAINER(var)  (GtkContainer*)(var)
#define GTK_WINDOW(var)  (GtkWindow*)(var)
#define GTK_WINDOW_TOPLEVEL 0
// Mocked GTK types
typedef struct _GtkButton GtkButton;
// Mocked enum type
typedef enum {
    GTK_ICON_SIZE_INVALID,
    GTK_ICON_SIZE_MENU,
    GTK_ICON_SIZE_SMALL_TOOLBAR,
    GTK_ICON_SIZE_LARGE_TOOLBAR,
    GTK_ICON_SIZE_BUTTON,
    GTK_ICON_SIZE_DND,
    GTK_ICON_SIZE_DIALOG
    // Add more sizes as needed
} GtkIconSize;

// Mocked enum type
typedef enum {
    GTK_ORIENTATION_HORIZONTAL,
    GTK_ORIENTATION_VERTICAL
} GtkOrientation;
typedef struct _GtkTextView GtkTextView;
typedef struct _GtkTextBuffer GtkTextBuffer;
typedef struct _GtkBox GtkBox;



#endif