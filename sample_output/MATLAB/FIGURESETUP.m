%% Figure setup
h1 = figure('color',[1 1 1], 'Unit', 'Centimeters', 'Position', [5 5 15 15]);
set(gcf,...
    'DefaultLineLineWidth', 2, 'DefaultAxesLineWidth',1.5,...
    'DefaultAxesFontName', 'Helvetica',...
    'DefaultAxesFontSize',16,...
    'DefaultAxesTickLength',[0.01,0.01], ...
    'DefaultAxesXMinorTick', 'off','DefaultAxesYMinorTick' ,'off' );
set(gcf,'DefaultLineMarkerSize',10);
colormap jet

%%{
h2 = figure('color',[1 1 1], 'Unit', 'Centimeters', 'Position', [5 5 15 15]);
set(gcf,...
    'DefaultLineLineWidth', 2, 'DefaultAxesLineWidth',1.5,...
    'DefaultAxesFontName', 'Helvetica',...
    'DefaultAxesFontSize',16,...
    'DefaultAxesTickLength',[0.01,0.01], ...
    'DefaultAxesXMinorTick', 'off','DefaultAxesYMinorTick' ,'off' );
set(gcf,'DefaultLineMarkerSize',10);
colormap jet
%}

h3 = figure('color',[1 1 1], 'Unit', 'Centimeters', 'Position', [5 5 15 15]);
set(gcf,...
    'DefaultLineLineWidth', 2, 'DefaultAxesLineWidth',1.5,...
    'DefaultAxesFontName', 'Helvetica',...
    'DefaultAxesFontSize',16,...
    'DefaultAxesTickLength',[0.01,0.01], ...
    'DefaultAxesXMinorTick', 'off','DefaultAxesYMinorTick' ,'off' );
set(gcf,'DefaultLineMarkerSize',10);
colormap jet


h4 = figure('color',[1 1 1], 'Unit', 'Centimeters', 'Position', [5 5 15 15]);
set(gcf,...
    'DefaultLineLineWidth', 2, 'DefaultAxesLineWidth',1.5,...
    'DefaultAxesFontName', 'Helvetica',...
    'DefaultAxesFontSize',16,...
    'DefaultAxesTickLength',[0.01,0.01], ...
    'DefaultAxesXMinorTick', 'off','DefaultAxesYMinorTick' ,'off' );
set(gcf,'DefaultLineMarkerSize',10);
colormap jet

co = [0    0.4470    0.7410;
    0.8500    0.3250    0.0980;
    0.9290    0.6940    0.1250;
    0.4940    0.1840    0.5560;
    0.4660    0.6740    0.1880;
    0.3010    0.7450    0.9330;
    0.6350    0.0780    0.1840];
set(groot,'defaultAxesColorOrder',co);
        