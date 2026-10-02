document.addEventListener('DOMContentLoaded', () => {
  const membros = [
    { nome: "Bruno Lacerda", cargo: "Desenvolvedor WEB e Programação" },
    { nome: "Fernando Akira", cargo: "Programador Principal e Gameplay" },
    { nome: "Eduardo Feitosa", cargo: "Músicas, Sprites e Programação" },
    { nome: "Arthur Muller", cargo: "Documentação" },
    { nome: "Arthur Moreira", cargo: "Documentação" }
  ];

  const track = document.getElementById('carousel-track');
  const btnPrev = document.querySelector('.prev-btn');
  const btnNext = document.querySelector('.next-btn');

  if (!track || !btnPrev || !btnNext) return;

  // Criação dinâmica dos cards
  membros.forEach((membro, index) => {
    const card = document.createElement('div');
    card.classList.add('carousel-card');
    card.dataset.index = index;
    card.innerHTML = `
      <div class="carousel-avatar"></div>
      <h3>${membro.nome}</h3>
      <p>${membro.cargo}</p>
    `;
    track.appendChild(card);
  });

  const cards = document.querySelectorAll('.carousel-card');
  const totalCards = cards.length;
  let currentIndex = 0; // POSIÇÃO INICIAL DO CARROSSEL

  function updateCarousel() {
    cards.forEach((card, i) => {
      card.classList.remove('active', 'prev', 'next');
      
      // FAZ O CARROSSEL RODAR EM LOOP
      const prevIndex = (currentIndex - 1 + totalCards) % totalCards;
      const nextIndex = (currentIndex + 1) % totalCards;

      if (i === currentIndex) {
        card.classList.add('active');
      } else if (i === prevIndex) {
        card.classList.add('prev');
      } else if (i === nextIndex) {
        card.classList.add('next');
      }
    });
  }

  // Navegação pelos botões
  btnNext.addEventListener('click', () => {
    currentIndex = (currentIndex + 1) % totalCards;
    updateCarousel();
  });

  btnPrev.addEventListener('click', () => {
    currentIndex = (currentIndex - 1 + totalCards) % totalCards;
    updateCarousel();
  });

  cards.forEach((card, index) => {
    card.addEventListener('click', () => {
      if (card.classList.contains('prev')) {
        currentIndex = (currentIndex - 1 + totalCards) % totalCards;
        updateCarousel();
      } else if (card.classList.contains('next')) {
        currentIndex = (currentIndex + 1) % totalCards;
        updateCarousel();
      }
    });
  });

  // Inicializa o estado visual
  updateCarousel();
});