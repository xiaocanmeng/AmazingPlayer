#ifndef GTK_GTK_H
#define GTK_GTK_H
#include "gtk_type.h"
// Mocked GTK functions
void gtk_scale_set_draw_value(GtkScale *scale, gboolean draw_value);
GtkButton* gtk_button_new_from_icon_name(const gchar *icon_name, GtkIconSize size);


// Mocked GTK functions
GtkScale* gtk_scale_new_with_range(GtkOrientation orientation,
                                    gdouble min, gdouble max, gdouble step);

// Mocked GTK functions
GtkAdjustment* gtk_adjustment_new(double value, double lower, double upper,
                                  double step_increment, double page_increment, double page_size);
void gtk_adjustment_set_value(GtkAdjustment *adjustment, double value);
double gtk_adjustment_get_value(const GtkAdjustment *adjustment);
void gtk_adjustment_set_lower(GtkAdjustment *adjustment, double lower);
void gtk_adjustment_set_upper(GtkAdjustment *adjustment, double upper);
void gtk_adjustment_set_step_increment(GtkAdjustment *adjustment, double step_increment);
void gtk_adjustment_set_page_increment(GtkAdjustment *adjustment, double page_increment);
void gtk_adjustment_set_page_size(GtkAdjustment *adjustment, double page_size);

// Mocked GTK functions
GtkWidget* gtk_window_new(int type);
void gtk_widget_show_all(GtkWidget *widget);
GtkButton* gtk_button_new_with_label(const char *label);
void gtk_container_add(GtkContainer *container, GtkWidget *widget);
void gtk_main();
void gtk_main_quit();
// Mocked GTK types
// Mocked GTK functions
GtkRange* gtk_range_new(GtkOrientation orientation, GtkAdjustment *adjustment);
void gtk_range_set_value(GtkRange *range, gdouble value);
gdouble gtk_range_get_value(GtkRange *range);
void gtk_range_set_increments(GtkRange *range, gdouble step, gdouble page);
void gtk_range_set_range(GtkRange *range, gdouble min, gdouble max);
void gtk_range_set_value(GtkRange *range, gdouble value);
void gtk_range_set_adjustment(GtkRange *range, GtkAdjustment *adjustment);
GtkTextView* gtk_text_view_new(void);
GtkTextBuffer* gtk_text_view_get_buffer(GtkTextView *text_view);
void gtk_text_view_set_editable(GtkTextView *text_view, gboolean editable);
GtkBox* gtk_box_new(GtkOrientation orientation, gint spacing);
void gtk_box_pack_start(GtkBox *box, GtkWidget *child, gboolean expand, gboolean fill, guint padding);
void gtk_window_set_default_size(GtkWindow *window, gint width, gint height);
void gtk_text_buffer_set_text(GtkTextBuffer *buffer, const gchar *text, gint length);
void gtk_text_buffer_insert_at_cursor(GtkTextBuffer *buffer, const gchar *text, gint length);
void gtk_init(int *argc, char ***argv);



#endif // GTK_GTK_H
