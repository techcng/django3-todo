from . import views
from django.urls import path

urlpatterns = [
	path('calc/', views.calcapp, name="calc")
]