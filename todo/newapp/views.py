from django.shortcuts import render
from django.http import HttpResponse


def calcapp(request):
	return HttpResponse(request, "This app is working on condition")

